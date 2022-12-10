val dx = arrayOf(-1, 1, 0, 0)
val dy = arrayOf(0, 0, -1, 1)

fun main() = with(System.`in`.bufferedReader()) {
    val n = readln().toInt()
    val graph = Array<Array<Char>>(n) { Array(n, {' '}) }
    var visit = Array<Array<Boolean>>(n) { Array(n, {false}) }
    
    repeat (n) { i ->
        val line = readln()
        line.forEachIndexed { c, it -> graph[i][c] = it }
    }

    fun dfs(x: Int, y: Int) {
        visit[x][y] = true
        for (i in 0 until 4) {
            val mx = x + dx[i]
            val my = y + dy[i]
            if (mx >= 0 && mx < n && my >= 0 && my < n && !visit[mx][my]) 
                if (graph[x][y] == graph[mx][my]) dfs(mx, my)
        }
    }

    var result = 0
    repeat (n) { i -> repeat (n) { j -> if (!visit[i][j]) { result++; dfs(i, j) } } }
    println(result)

    // R to G
    visit.forEach { it.fill(false) }
    repeat (n) { i -> repeat (n) { j -> if (graph[i][j] == 'R') graph[i][j] = 'G' } }
    
    result = 0
    repeat (n) { i -> repeat (n) { j -> if (!visit[i][j]) { result++; dfs(i, j) } } }
    println(result)
}