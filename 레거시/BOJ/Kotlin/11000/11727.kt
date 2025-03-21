fun main() = with(System.`in`.bufferedReader()) {    
    val n = readln().toInt()

    val dp = mutableListOf<Long>(0, 1, 3)
    for (i in 3..1000) dp.add((2 * dp[i - 2] + dp[i - 1]) % 10007)

    println(dp[n] % 10007)
}