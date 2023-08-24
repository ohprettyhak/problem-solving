import java.util.*

fun main() = with(System.`in`.bufferedReader()) {
    val (n, m) = readln().split(" ").map { it.toInt() }
    val numbers = readln().split(" ").map { it.toInt() }.toMutableList()

    val devices = PriorityQueue<Int>(Collections.reverseOrder())
    numbers.forEach { devices.add(it) }

    val pq = PriorityQueue<Int>()
    repeat(m) {
        if (it >= n) return@repeat
        pq.add(devices.poll())
    }

    for (i in 0 until (n - m)) {
        pq.add(devices.poll() + pq.poll())
    }

    println(pq.max())
}