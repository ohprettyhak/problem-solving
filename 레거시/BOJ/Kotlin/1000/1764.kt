fun main() = with(System.`in`.bufferedReader()) {    
    val (n, m) = readln().split(" ").map { it.toInt() }
    val ear = mutableSetOf<String>()
    val ans = mutableListOf<String>()

    repeat (n) { ear.add(readln()) }
    repeat (m) {
        val eyes = readln()
        if (ear.contains(eyes)) ans.add(eyes)
    }

    val sb = StringBuilder()
    sb.appendLine(ans.size)
    ans.sorted().forEach { sb.appendLine(it) }
    println(sb)
}