fun main() = with(System.`in`.bufferedReader()) {
    val t = readln().toInt()

    repeat(t) {
        var n = readln().toLong()

        if (n <= 2L) {
            println(2L)
        } else {
            var i: Long = 2L
            while (i <= n / i) {
                if (n % i == 0L) {
                    n += 1
                    i = 1
                }
                i++
            }
            println(n)
        }
    }
}