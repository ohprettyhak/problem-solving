fun main() = with(System.`in`.bufferedReader()) {
    val a = readln().toInt()
    val b = readln().toInt()
    val c = readln().toInt()

    val sum: String = (a * b * c).toString()
    var numbers = mutableListOf<Int>(0, 0, 0, 0, 0, 0, 0, 0, 0, 0)

    for (i in 0 until sum.length) numbers[sum[i] - '0'] += 1
    for (i in numbers) println(i)
}