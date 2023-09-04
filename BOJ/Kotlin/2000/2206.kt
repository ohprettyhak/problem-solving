import java.util.*

val dx = listOf(-1, 1, 0, 0)
val dy = listOf(0, 0, -1, 1)

fun main() = with(System.`in`.bufferedReader()) {
    val (n, m) = readln().split(" ").map { it.toInt() }
    val map = Array(n) { IntArray(m) }
    val visited = Array(n) { Array(m) { BooleanArray(2) { false } } }

    repeat(n) { i ->
        val line = readln()
        repeat(m) { j -> map[i][j] = line[j] - '0' }
    }

    val queue: Queue<Triple<Int, Int, Int>> = LinkedList()
    queue.offer(Triple(0, 0, 0))
    visited[0][0][0] = true
    var result = 1

    while (queue.isNotEmpty()) {
        val size = queue.size
        for (i in 0 until size) {
            val (x, y, wallState) = queue.poll()

            if (x == n - 1 && y == m - 1) {
                println(result)
                return
            }

            for (j in 0 until 4) {
                val nx = x + dx[j]
                val ny = y + dy[j]

                if (nx >= n || nx < 0 || ny >= m || ny < 0) continue

                if (map[nx][ny] == 1 && wallState == 0 && !visited[nx][ny][1]) {
                    visited[nx][ny][1] = true
                    queue.offer(Triple(nx, ny, 1))
                } else if (map[nx][ny] == 0 && !visited[nx][ny][wallState]) {
                    visited[nx][ny][wallState] = true
                    queue.offer(Triple(nx, ny, wallState))
                }
            }
        }
        result++
    }

    println(-1)
}