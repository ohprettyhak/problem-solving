fun main() = with(System.`in`.bufferedReader()) {
    var k = readln().toLong()
    val factors = mutableListOf<Long>()

    var i = 2L
    while (i * i <= k) {
        while (k % i == 0L) {
            factors.add(i)
            k /= i
        }
        i++
    }

    if (k > 1) factors.add(k)

    println(factors.size)
    println(factors.joinToString(" "))
}