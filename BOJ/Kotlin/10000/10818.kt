fun main() = with(System.`in`.bufferedReader()) {
    val n = readln().toInt()
    val numbers = readln().split(" ").map { it.toInt() }

    var low = Int.MAX_VALUE; var high = Int.MIN_VALUE
    for (i in 0 until n) {
        low = Math.min(low, numbers[i])
        high = Math.max(high, numbers[i])
    }
    println("$low $high")
}