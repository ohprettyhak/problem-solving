import java.util.PriorityQueue

fun main() = with(System.`in`.bufferedReader()) {
    val n = readln().toInt()
    val times = mutableListOf<Pair<Int, Int>>()
    val q = PriorityQueue<Int>()

    repeat(n) {
        val (start, end) = readln().split(" ").map { it.toInt() }
        times.add(Pair(start, end))
    }

    times.sortBy { it.first }

    times.forEach {
        if (q.isNotEmpty() && q.peek() <= it.first) q.poll()
        q.add(it.second)
    }

    print(q.size)
}