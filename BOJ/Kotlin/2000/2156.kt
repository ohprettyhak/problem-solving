import kotlin.math.max

fun main() = with(System.`in`.bufferedReader()) {
    val n = readln().toInt()

    val drink = IntArray(n) { 0 }
    val dp = IntArray(n) { 0 }

    for (i in 0 until n) drink[i] = readln().toInt()
    dp[0] = drink[0]
    if (n == 1) {
        println(dp[0])
        return
    }
    dp[1] = drink[0] + drink[1]
    if (n == 2) {
        println(dp[1])
        return
    }
    dp[2] = max(dp[1], max(dp[0] + drink[2], drink[1] + drink[2]))

    for (i in 3 until n) {
        dp[i] = max(dp[i - 1], max(dp[i - 3] + drink[i - 1] + drink[i], dp[i - 2] + drink[i]))
    }

    println(dp[n - 1])
}