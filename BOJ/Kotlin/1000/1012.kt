import java.io.*

fun search(map: Array<IntArray>, visit: Array<BooleanArray>, m: Int, n: Int, x: Int, y: Int) {
    val dx = listOf(-1, 1, 0, 0)
    val dy = listOf(0, 0, -1, 1)

    visit[x][y] = true

    for (i: Int in 0 until 4) {
        val nx = x + dx[i]
        val ny = y + dy[i]

        if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue
        if (map[nx][ny] == 1 && !visit[nx][ny]) search(map, visit, m, n, nx, ny)
    }
}

fun main() = with(System.`in`.bufferedReader()) {
    val bw = BufferedWriter(OutputStreamWriter(System.out))
    
    val t = readln().toInt()

    repeat (t) {
        val (m, n, k) = readln().split(" ").map { it.toInt() }
        val map = Array<IntArray>(m) { IntArray(n, {0}) }
        val visit = Array<BooleanArray>(m) { BooleanArray(n, {false}) }

        repeat (k) {
            val (x, y) = readln().split(" ").map { it.toInt() }
            map[x][y] = 1
        }

        var count = 0
        for (i in 0 until m) {
            for (j in 0 until n) {
                if (map[i][j] == 1 && !visit[i][j]) {
                    count += 1
                    search(map, visit, m, n, i, j)
                }
            }
        }
        
        bw.write("$count ")
    }
    
    bw.flush()
    bw.close()
}