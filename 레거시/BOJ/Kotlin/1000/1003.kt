fun main() = with(System.`in`.bufferedReader()) {
    val t = readln().toInt()
    
    val zero = mutableListOf<Int>(1, 0, 1)
    val one = mutableListOf<Int>(0, 1, 1)
    
    for (i in 3..40) {
        zero.add(zero[i - 2] + zero[i - 1])
        one.add(one[i - 2] + one[i - 1])
    }

    repeat (t) {
        val n = readln().toInt()
        println("${zero[n]} ${one[n]}")
    }
}