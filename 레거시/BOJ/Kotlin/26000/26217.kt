fun main() = with(System.`in`.bufferedReader()) {
    val n = readln().toDouble()
    
    var result: Double = 0.0
    for (i in n.toInt() downTo 1) result += (n / i)
    println(result)
}