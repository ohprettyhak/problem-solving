fun main() = with(System.`in`.bufferedReader()) {
    while (true) {
        val (a, b) = readln().split(" ").map { it.toInt() }
        if (a == 0 && b == 0) break
        println(a + b)
    }
}