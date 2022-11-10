fun main() = with(System.`in`.bufferedReader()) {
    val read = readln().split(" ").map { it.toInt() }
    println("${read[0] + read[1]}")
    println("${read[0] - read[1]}")
    println("${read[0] * read[1]}")
    println("${read[0] / read[1]}")
    println("${read[0] % read[1]}")
}