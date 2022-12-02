fun main() = with(System.`in`.bufferedReader()) {
    val t = readln().toInt()

    val dp = IntArray(12, {0})
    dp[1] = 1  // 1
    dp[2] = 2  // 1+1, 2
    dp[3] = 4  // 1+1+1+1, 1+1+2, 2+2, 3+1
    for (i: Int in 4..11) dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3]
    
    repeat(t) {
        val n = readln().toInt()
        println(dp[n])
    }
}