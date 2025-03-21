fun main() = with(System.`in`.bufferedReader()) {
    while (true) {
        try {
            val read = readln().split(" ").map { it.toInt() }
            println("${read[0] + read[1]}")
        } catch (e: Exception) {
            break
        }
    }
}