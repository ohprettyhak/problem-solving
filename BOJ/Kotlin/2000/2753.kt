fun main() = with(System.`in`.bufferedReader()) {
    val n = readln().toInt()
    if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0) println(1)
    else println(0)
}