import java.util.*

val dx = intArrayOf(0, 0, 1, -1)
val dy = intArrayOf(1, -1, 0, 0)

fun main() = with(System.`in`.bufferedReader()) {
    val (n, m) = readln().split(" ").map { it.toInt() }
    val value = Array(n) { IntArray(m) { 0 } }
    repeat(n) { i -> value[i] = readln().split(" ").map { it.toInt() }.toIntArray() }
    val k = readln().toInt()

    val pq = PriorityQueue<Triple<Int, Int, Int>>(compareByDescending { it.first })  // (value, x, y)
    val visited = Array(n) { BooleanArray(m) { false } }

    for (i in 0 until n) {
        for (j in 0 until m) {
            if (i == 0 || j == 0 || i == n - 1 || j == m - 1) {
                pq.add(Triple(value[i][j], i, j))  // insert outside value
                visited[i][j] = true
            }
        }
    }

    for (i in 0 until k) {
        val (_, x, y) = pq.poll()
        println("${x + 1} ${y + 1}")

        for (j in 0..3) {
            val nx = x + dx[j]
            val ny = y + dy[j]

            if (nx < 0 || nx >= n || ny < 0 || ny >= m || visited[nx][ny]) continue
            pq.add(Triple(value[nx][ny], nx, ny))
            visited[nx][ny] = true
        }
    }
}