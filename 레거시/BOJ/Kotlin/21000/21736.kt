import java.util.LinkedList

val dx = listOf(-1, 1, 0, 0)
val dy = listOf(0, 0, -1, 1)

fun main() = with(System.`in`.bufferedReader()) {    
    val (n, m) = readln().split(" ").map { it.toInt() }
    val graph = Array<Array<Char>>(n) { Array(m) { ' ' } }
    val visit = Array<Array<Boolean>>(n) { Array(m) { false } }
    val queue = LinkedList<Pair<Int, Int>>()
    
    repeat (n) { i ->
        val line = readln()
        line.forEachIndexed { j, it -> 
            graph[i][j] = it
            if (it == 'I') queue.offer(Pair(j, i))  // x, y
        }
    }

    var result = 0
    while (queue.isNotEmpty()) {
        val (x, y) = queue.poll()
        if (visit[y][x]) continue
        visit[y][x] = true
        if (graph[y][x] == 'P') result++

        for (i in 0 until 4) {
            val mx = x + dx[i]
            val my = y + dy[i]

            if (0 > mx || mx >= m || 0 > my || my >= n) continue
            if (!visit[my][mx] && graph[my][mx] != 'X') queue.offer(Pair(mx, my))
        }
    }

    if (result == 0) println("TT")
    else println(result)
}