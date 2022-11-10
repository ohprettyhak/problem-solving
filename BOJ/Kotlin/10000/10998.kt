fun main() = with(System.`in`.bufferedReader()) {
    val read = readln().split(" ").map { it.toInt() }
    print("${read[0] * read[1]}")
}