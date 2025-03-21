fun main() = with(System.`in`.bufferedReader()) {
    val n = readln().toInt()
    val numbers = readln().split(" ").map { it.toDouble() }

    var m = 0.0
    for (i in numbers) m = Math.max(m, i)

    var sum = 0.0;
    for (i in numbers) sum += (i / m * 100.0)
    println("${sum / n}")
}