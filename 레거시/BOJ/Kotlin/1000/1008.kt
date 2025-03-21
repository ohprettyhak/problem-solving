fun main() = with(System.`in`.bufferedReader()) {
    val read = readln().split(" ").map { it.toDouble() }
    println("${read[0] / read[1]}")
}