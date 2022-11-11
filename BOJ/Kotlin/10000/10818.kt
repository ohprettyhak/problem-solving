fun main() = with(System.`in`.bufferedReader()) {
    val n = readln().toInt()
    val numbers = readln().split(" ").map { it.toInt() }

    var low = 2147483647; var high = 0
    for (i in 0 until n) {
        low = Math.min(low, numbers[i])
        high = Math.max(high, numbers[i])
    }
    println("$low $high")
}