fun main() = with(System.`in`.bufferedReader()) {
    var (n, k) = readln().split(" ").map { it.toInt() }

    val coin = Array<Int>(n, {0})
    for (i: Int in 0 until n) coin[i] = readln().toInt()

    var cnt = 0
    for (i: Int in n - 1 downTo 0) {
        if (k / coin[i] != 0) {
            cnt += (k / coin[i])
            k %= coin[i]
        }
        if (k == 0) break
    }
    
    println(cnt)
}