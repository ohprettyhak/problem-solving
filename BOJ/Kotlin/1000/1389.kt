import java.util.*

fun main() = with(System.`in`.bufferedReader()) {
    val (n, m) = readln().split(" ").map { it.toInt() }

    val graph = Array<MutableList<Int>>(n) { mutableListOf<Int>() }
    repeat(m) {
        val (x, y) = readln().split(" ").map { it.toInt() }
        graph[x - 1].add(y - 1)
        graph[y - 1].add(x - 1)
    }

    val distance = Array(n) { IntArray(n) { -1 } }
    val visited = BooleanArray(n)

    // bfs function (fill distance array)
    fun search(start: Int) {
        val queue: Queue<Int> = LinkedList()
        visited.fill(false)
        queue.add(start)
        visited[start] = true

        while (queue.isNotEmpty()) {
            val current = queue.poll()
            for (node in graph[current]) {
                if (!visited[node]) {
                    distance[start][node] = distance[start][current] + 1
                    queue.add(node)
                    visited[node] = true
                }
            }
        }
    }

    // find distance
    repeat(n) { search(it) }

    // find minimum person
    var result: Pair<Int, Int> = Pair(-1, Int.MAX_VALUE)
    repeat(n) {
        if (result.second > distance[it].sum()) {
            result = Pair(it, distance[it].sum())
        }
    }

    println(result.first + 1)
}