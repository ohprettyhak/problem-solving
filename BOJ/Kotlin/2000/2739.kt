fun main() = with(System.`in`.bufferedReader()) {
    val n = readln().toInt()
    for (i in 1..9) println("${n} * ${i} = ${n * i}")
}