import java.util.LinkedList

val dx = listOf(-1, 1, 0, 0)
val dy = listOf(0, 0, -1, 1)

fun main() = with(System.`in`.bufferedReader()) {
    // n: row, m: column
    val (m, n) = readln().split(" ").map { it.toInt() }
    val box = Array<Array<Int>>(n) { Array(m, {0}) }

    val queue = LinkedList<Pair<Int, Int>>()
    for (i in 0 until n) {
        val line = readln().split(" ").map { it.toInt() }
        line.forEachIndexed { index, it ->
            box[i][index] = it
            if (it == 1) queue.add(Pair(i, index))
        }
    }

    while (queue.isNotEmpty()) {
        val (y, x) = queue.poll()
        
        for (i in 0..3) {
            val dx = x + dx[i]
            val dy = y + dy[i]
            if (dx >= 0 && dx < m && dy >= 0 && dy < n && box[dy][dx] == 0) {
                queue.add(Pair(dy, dx))
                box[dy][dx] = box[y][x] + 1
            }
        }
    }

    var result = 0
    for (i in 0 until n) {
        for (j in 0 until m) {
            if (box[i][j] == 0) {
                println(-1)
                return
            }
            result = Math.max(result, box[i][j])
        }
    }
    if (result == 1) println(0)
    else println(result - 1)
}