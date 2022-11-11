fun main() = with(System.`in`.bufferedReader()) {
    val (h, m) = readln().split(" ").map { it.toInt() }

    var total = h * 60 + m - 45
    if (total < 0) total += 1440
    println("${total / 60} ${total % 60}")
}