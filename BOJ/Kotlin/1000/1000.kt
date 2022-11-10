fun main() = with(System.`in`.bufferedReader()) {
    val read = readLine().split(" ").map { it.toInt() }
    print("${read[0] + read[1]}")
}