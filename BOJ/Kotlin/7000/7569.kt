import java.util.*

val dx = listOf(0, 0, 1, -1, 0, 0)
val dy = listOf(1, -1, 0, 0, 0, 0)
val dz = listOf(0, 0, 0, 0, 1, -1)

fun main() = with(System.`in`.bufferedReader()) {
    val (m, n, h) = readln().split(" ").map { it.toInt() }  // m: 가로, n: 세로, h: 높이
    val box = Array(h) { Array(n) { IntArray(m) } }
    val queue: Queue<Triple<Int, Int, Int>> = LinkedList()

    repeat(h) { z ->
        repeat(n) { y ->
            val line = readln().split(" ").map { it.toInt() }
            line.forEachIndexed { x, value ->
                box[z][y][x] = value
                if (value == 1) queue.add(Triple(x, y, z))
            }
        }
    }

    while (queue.isNotEmpty()) {
        val (x, y, z) = queue.poll()

        for (i in 0 until 6) {
            val mx = x + dx[i]
            val my = y + dy[i]
            val mz = z + dz[i]

            if (mx < 0 || mx >= m || my < 0 || my >= n || mz < 0 || mz >= h || box[mz][my][mx] != 0) continue
            box[mz][my][mx] = box[z][y][x] + 1
            queue.add(Triple(mx, my, mz))
        }
    }

    var result = 0
    loop@ for (z in 0 until h) {
        for (y in 0 until n) {
            for (x in 0 until m) {
                if (box[z][y][x] == 0) result = -1
                if (result == -1) break@loop
                result = result.coerceAtLeast(box[z][y][x])
            }
        }
    }

    println(if (result == -1) -1 else result - 1)
}