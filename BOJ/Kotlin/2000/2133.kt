fun main() = with(System.`in`.bufferedReader()) {    
    val n = readln().toInt()

    val dp = mutableListOf<Long>(1, 0, 3, 0)
    for (i in 4..30) {
        if (i % 2 == 0) {
            dp.add(3 * dp[i - 2])
            for (j in 4..i) if (j % 2 == 0) dp[i] += 2 * dp[i - j]
        } else dp.add(0)
    }

    println(dp[n])
}