fun main() = with(System.`in`.bufferedReader()) {
    val t = readln().toInt()
    
    val dp = mutableListOf<Long>(1, 1, 1)
    for (i: Int in 3..100) dp.add(dp[i - 3] + dp[i - 2])

    repeat (t) { println(dp[readln().toInt() - 1]) }
}