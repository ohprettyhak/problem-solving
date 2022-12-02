fun main() = with(System.`in`.bufferedReader()) {
    val n = readln().toInt()
    val stairs = IntArray(301, {0})
    for (i: Int in 0 until n) stairs[i] = readln().toInt()

    val dp = IntArray(301, {0})
    dp[0] = stairs[0]
    dp[1] = stairs[0] + stairs[1]
    dp[2] = Math.max(stairs[0] + stairs[2], stairs[1] + stairs[2])

    for (i: Int in 3..n) dp[i] = Math.max(dp[i - 3] + stairs[i - 1] + stairs[i], dp[i - 2] + stairs[i])
    println(dp[n - 1])
}