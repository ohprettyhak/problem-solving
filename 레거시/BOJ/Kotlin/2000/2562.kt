fun main() = with(System.`in`.bufferedReader()) {
    var m = Int.MIN_VALUE; var idx = -1
    for (i in 1..9) {
        val n = readln().toInt()
        if (n > m) {
            idx = i
            m = n
        }
    }
    println("$m\n$idx")
}