fun main() = with(System.`in`.bufferedReader()) {
    val (n, x) = readln().split(" ").map { it.toInt() }
    val numbers = readln().split(" ").map { it.toInt() }
    for (i in 0 until n) if (numbers[i] < x) print("${numbers[i]} ")
}