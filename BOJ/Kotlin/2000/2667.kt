fun main() = with(System.`in`.bufferedReader()) {
    val n = readln().toInt()
    val map = Array<IntArray>(n) { IntArray(n, {0}) }
    val visit = Array<BooleanArray>(n) { BooleanArray(n, {false}) }
    
    for (i: Int in 0 until n) {
        val line = readln()
        for (j in 0 until n) map[i][j] = line[j] - '0'
    }

    val dx = listOf(-1, 1, 0, 0)
    val dy = listOf(0, 0, -1, 1)

    var cnt = 0
    fun search(x: Int, y: Int) {
        visit[x][y] = true
        cnt += 1

        for (i: Int in 0 until 4) {
            val nx = x + dx[i]
            val ny = y + dy[i]

            if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue
            if (map[nx][ny] == 1 && !visit[nx][ny]) search(nx, ny)
        }
    }

    var rst = mutableListOf<Int>()
    for (i: Int in 0 until n) {
        for (j: Int in 0 until n) {
            if (map[i][j] == 1 && !visit[i][j]) {
                cnt = 0
                search(i, j)
                rst.add(cnt)
            }
        }
    }
    
    rst.sort()
    println(rst.size)
    rst.forEach { println(it) }
}