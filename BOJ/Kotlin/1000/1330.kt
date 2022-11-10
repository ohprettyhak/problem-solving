fun main() = with(System.`in`.bufferedReader()) {
    val read = readln().split(" ").map { it.toInt() }
    
    if (read[0] > read[1]) println(">")
    else if (read[0] < read[1]) println("<")
    else println("==")
}