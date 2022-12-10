import java.util.PriorityQueue

fun main() = with(System.`in`.bufferedReader()) {
    val n = readln().toInt()
    val pq = PriorityQueue<Int>{ a, b -> 
        when {
            Math.abs(a) == Math.abs(b) -> a - b
            else -> Math.abs(a) - Math.abs(b)
        }
    }
    val sb = StringBuilder()
    
    repeat (n) {
        val x = readln().toInt()
        if (x == 0) {
            if (pq.isEmpty()) sb.append("0 ")
            else sb.append("${pq.poll()} ")
        } else {
            pq.add(x)
        }
    }
    
    println(sb.toString())
}