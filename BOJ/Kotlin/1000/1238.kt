import java.util.PriorityQueue

fun main() = with(System.`in`.bufferedReader()) {
    var (n, m, x) = readln().split(" ").map { it.toInt() }
    x -= 1

    val pplWays = Array<MutableList<Pair<Int, Int>>>(n) { mutableListOf() }
    repeat(m) {
        val (start, end, time) = readln().split(" ").map { it.toInt() }
        pplWays[start - 1].add(end - 1 to time)
    }

    fun dijkstra(start: Int): IntArray {
        val distance = IntArray(n) { Int.MAX_VALUE }
        distance[start] = 0

        val queue = PriorityQueue<Int>(compareBy { distance[it] })
        queue.add(start)

        while (queue.isNotEmpty()) {
            val now = queue.poll()
            for ((next, cost) in pplWays[now]) {
                val newCost = distance[now] + cost
                if (newCost < distance[next]) {
                    distance[next] = newCost
                    queue.add(next)
                }
            }
        }
        return distance
    }

    val dijkstraResult = mutableListOf<IntArray>()
    for (i in 0 until n) dijkstraResult.add(dijkstra(i))

    var result = 0
    for (i in 0 until n) result = result.coerceAtLeast(dijkstraResult[i][x] + dijkstraResult[x][i])

    print(result)
}