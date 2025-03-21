fun main() {
    val n = readln().toInt()
    val graph = Array(n) { Array(n) { 0 } }

    repeat(n) { i ->
        val line = readln().split(" ").map { it.toInt() }
        line.forEachIndexed { j, it -> graph[i][j] = it }
    }

    var m = 0
    var z = 0
    var o = 0

    fun search(x: Int, y: Int, size: Int) {
        val type = graph[x][y]
        for (i in x until (x + size)) {
            for (j in y until (y + size)) {
                if (type != graph[i][j]) {
                    val div = size / 3
                    repeat(3) { k -> repeat(3) { l -> search(x + div * k, y + div * l, div) } }
                    return
                }
            }
        }
        when (type) {
            0 -> z += 1
            1 -> o += 1
            else -> m += 1
        }
    }

    search(0, 0, n)
    println("$m\n$z\n$o")
}