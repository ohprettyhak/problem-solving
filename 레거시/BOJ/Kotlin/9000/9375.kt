fun main() = with(System.`in`.bufferedReader()) {    
    val t = readln().toInt()
    val sb = StringBuilder()
    
    repeat (t) {
        val map = HashMap<String, Int>()
        val n = readln().toInt()
        repeat (n) {
            val (_, type) = readln().split(" ")
            map[type] = map.getOrDefault(type, 1) + 1
        }
        
        var count = 1
        map.values.forEach { count *= it }
        sb.append("${count - 1} ")
    }

    println(sb.toString())
}