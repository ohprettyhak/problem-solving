fun main() = with(System.`in`.bufferedReader()) {    
    var n = readln().toInt()
    n %= 10

    val word = "SciComLove"
    for (i in n until 10) print("${word[i]}")
    for (i in 0 until n) print("${word[i]}")
}