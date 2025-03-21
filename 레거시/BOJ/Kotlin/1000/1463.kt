fun main() = with(System.`in`.bufferedReader()) {
    val x = readln().toInt()

    val dp = Array<Int>(x + 1, {0})

    for (i: Int in 2..x) {
        var value = Integer.MAX_VALUE
        if (i % 3 == 0) value = Math.min(value, dp[i / 3])
        if (i % 2 == 0) value = Math.min(value, dp[i / 2])
        value = Math.min(value, dp[i - 1])
        
        dp[i] = value + 1
    }
    
    println(dp[x])
}