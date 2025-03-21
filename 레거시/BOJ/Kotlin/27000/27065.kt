fun main() = with(System.`in`.bufferedReader()) {    
    val t = readln().toInt()
    val sb = StringBuilder()

    fun getDivisors(n: Int): MutableList<Int> {
        val divisors = mutableListOf<Int>()
        divisors.add(1)

        var i = 2
        var sqrt = Math.sqrt(n.toDouble())
        while (i.toDouble() < sqrt) {
            if (n % i == 0) divisors.add(i)
            i++
        }
        var length = divisors.size - 1
        if (i * i == n) divisors.add(i)
        
        while (length > 0) {
            divisors.add((n / divisors[length]).toInt())
            length--
        }
        divisors.add(n)
        
        return divisors
    }

    val check = BooleanArray(5001) { false }
    for (i in 1..5000) {
        val list = getDivisors(i)
        if (list.sum() > 2 * i) check[i] = true
    }
    
    repeat(t) {
        val n = readln().toInt()

        var flag = false
        var list = getDivisors(n)
        list.forEachIndexed { idx, it ->
            if (idx != list.size - 1 && check[it]) { flag = true; return@forEachIndexed }
        }
        
        if (check[n] && !flag) sb.append("Good Bye\n")
        else sb.append("BOJ 2022\n")
    }
    
    println(sb.toString())
}