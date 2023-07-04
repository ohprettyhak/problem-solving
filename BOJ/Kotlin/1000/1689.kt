import java.util.PriorityQueue

fun main() = with(System.`in`.bufferedReader()) {
    val n = readln().toInt()
    val lines = mutableListOf<Pair<Int, Int>>()
    val q = PriorityQueue<Int>()

    repeat(n) {
        val (s, e) = readln().split(" ").map { it.toInt() }
        lines.add(Pair(s, e))
    }

    lines.sortBy { it.first }

    lines.forEach {
        if (q.isNotEmpty() && q.peek() <= it.first) q.poll()
        q.add(it.second)
    }

    print(q.size)
}