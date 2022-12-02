fun main() = with(System.`in`.bufferedReader()) {
    val (n, m) = readln().split(" ").map { it.toInt() }
    val maze = Array<IntArray>(n) { IntArray(m, {0}) }
    val weight = Array<IntArray>(n) { IntArray(m, {Integer.MAX_VALUE}) }
    
    for (i: Int in 0 until n) {
        val line = readln()
        for (j in 0 until m) maze[i][j] = line[j] - '0'
    }

    val dx = listOf(-1, 1, 0, 0)
    val dy = listOf(0, 0, -1, 1)
    
    fun search(x: Int, y: Int, cost: Int) {
        weight[x][y] = Math.min(cost, weight[x][y])

        for (i: Int in 0 until 4) {
            val nx = x + dx[i]
            val ny = y + dy[i]

            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue
            if (maze[nx][ny] == 1 && weight[nx][ny] > weight[x][y] + 1) search(nx, ny, weight[x][y] + 1)
        }
    }

    search(0, 0, 1);
    println(weight[n - 1][m - 1])
}