fun main() = with(System.`in`.bufferedReader()) {
    var n = readln().toInt()

    while (n-- != 0) {
        val read = readln().split(" ").map { it.toInt() }
        println(read[0] + read[1])
    }
}