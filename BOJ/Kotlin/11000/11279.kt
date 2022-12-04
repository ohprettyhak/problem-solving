import java.util.*

fun main() = with(System.`in`.bufferedReader()) {    
    val n = readln().toInt()
    val queue = PriorityQueue<Int>(Collections.reverseOrder())

    repeat (n) {
        val x = readln().toInt()
        if (x == 0) {
            if (queue.isEmpty()) println("0")
            else println(queue.poll())
        } else queue.add(x)
    }
}