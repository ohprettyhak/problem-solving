fun main() = with(System.`in`.bufferedReader()) {
    val (n, m) = readln().split(" ").map { it.toInt() }
    val list = mutableMapOf<String, String>()
    val sb = StringBuilder()
    
    repeat (n) {
        val (address, password) = readln().split(" ")
        list.put(address, password)
    }

    repeat (m) { sb.append("${list[readln()]} ") }
    println(sb.toString())
}