fun main() = with(System.`in`.bufferedReader()) {
    val n = readln().toInt()
    println((n / 5) + (n / 25) + (n / 125))
}