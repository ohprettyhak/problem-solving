fun main() = with(System.`in`.bufferedReader()) {
    val n = readln().toInt()
    val x = readln().split(" ").map { it.toInt() }.toMutableList()
    val sb = StringBuilder()
    
    val index = x.distinct().sorted()
    for (i in 0 until n) sb.append("${index.binarySearch(x[i])} ")
    println(sb.toString())
}