import java.util.LinkedList

data class Tomato(val x: Int, val y: Int, val z: Int)

val dx = arrayOf(-1, 1, 0, 0, 0, 0)
val dy = arrayOf(0, 0, -1, 1, 0, 0)
val dz = arrayOf(0, 0, 0, 0, -1, 1)

fun main() = with(System.`in`.bufferedReader()) {
    // n: row, m: column, h: height
    val (m, n, h) = readln().split(" ").map { it.toInt() }
    val box = Array<Array<Array<Int>>>(h) { Array(n) { Array(m, {0})} }

    val queue = LinkedList<Tomato>()
    for (z in 0 until h) {
        for (y in 0 until n) {
            val line = readln().split(" ").map { it.toInt() }
            line.forEachIndexed { x, it ->
                box[z][y][x] = it
                if (it == 1) queue.add(Tomato(x, y, z))  // x, y, z
            }
        }
    }

    while (queue.isNotEmpty()) {
        val t:Tomato = queue.poll()
        
        for (i in 0..5) {
            val dx = t.x + dx[i]
            val dy = t.y + dy[i]
            val dz = t.z + dz[i]
            if (dx >= 0 && dx < m && dy >= 0 && dy < n && dz >= 0 && dz < h && box[dz][dy][dx] == 0) {
                queue.add(Tomato(dx, dy, dz))
                box[dz][dy][dx] = box[t.z][t.y][t.x] + 1
            }
        }
    }

    var result = 0
    for (z in 0 until h) {
        for (y in 0 until n) {
            for (x in 0 until m) {
                if (box[z][y][x] == 0) {
                    println(-1)
                    return
                }
                result = Math.max(result, box[z][y][x])
            }
        }
    }
    if (result == 1) println(0)
    else println(result - 1)
}