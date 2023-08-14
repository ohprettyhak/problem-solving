import java.util.LinkedList

class Solution {
    val dx = listOf(-1, 1, 0, 0)
    val dy = listOf(0, 0, -1, 1)

    fun solution(board: Array<String>): Int {
        val dx = intArrayOf(0, 0, 1, -1)
        val dy = intArrayOf(1, -1, 0, 0)

        val y = board.size
        val x = board[0].length

        var start = Pair(0, 0)
        var target = Pair(0, 0)

        for (i in 0 until y) {
            for (j in 0 until x) {
                if (board[i][j] == 'R') start = Pair(i, j)
                if (board[i][j] == 'G') target = Pair(i, j)
            }
        }

        val visited = Array(y) { BooleanArray(x) { false } }
        val queue: LinkedList<Pair<Pair<Int, Int>, Int>> = LinkedList()
        queue.offer(Pair(start, 0))

        while (queue.isNotEmpty()) {
            val (current, weight) = queue.poll()
            if (current == target) return weight

            for (i in 0..3) {
                var ny = current.first
                var nx = current.second

                while (true) {
                    ny += dy[i]
                    nx += dx[i]
                    if (nx < 0 || nx >= x || ny < 0 || ny >= y || board[ny][nx] == 'D') break
                }
                ny -= dy[i]
                nx -= dx[i]

                if (!visited[ny][nx]) {
                    visited[ny][nx] = true
                    queue.offer(Pair(Pair(ny, nx), weight + 1))
                }
            }
        }

        return -1
    }
}