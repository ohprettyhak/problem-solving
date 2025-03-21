fun main() = with(System.`in`.bufferedReader()) {
    val n = readln().toInt()
    val numbers = readln()

    var sum = 0
    for (i in numbers) sum += (i - '0')
    println(sum)
}