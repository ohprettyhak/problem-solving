fun main() = with(System.`in`.bufferedReader()) {    
    val n = readln().toInt()
    val dp = mutableListOf<Int>(0, 1)

    for (i in 2..50000) {
        var value = Integer.MAX_VALUE
        var j = 1
        while (j * j <= i) {
            value = Math.min(value, dp[i - j * j])
            j++;
        }
        dp.add(value + 1)
    }

    println(dp[n])
}