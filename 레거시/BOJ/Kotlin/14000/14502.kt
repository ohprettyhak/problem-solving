import java.util.LinkedList

val dx = listOf(-1, 1, 0, 0)
val dy = listOf(0, 0, -1, 1)

fun main() = with(System.`in`.bufferedReader()) {
    val (n, m) = readln().split(" ").map { it.toInt() }

    val blocks = mutableListOf<MutableList<Int>>()
    val virus = mutableListOf<Pair<Int, Int>>()

    repeat(n) {
        val line = readln().split(" ").map { it.toInt() }.toMutableList()
        blocks.add(line)
        line.forEachIndexed { index, number -> if (number == 2) virus.add(it to index) }
    }

    var result = 0

    fun search() {
        val copiedVirus = LinkedList(virus.map { it.first to it.second }.toList())
        val copiedBlocks = blocks.map { it.toMutableList() }.toMutableList()

        while (copiedVirus.isNotEmpty()) {
            val (y, x) = copiedVirus.poll()

            for (i in 0 until 4) {
                val dx = x + dx[i]
                val dy = y + dy[i]
                if ((dx >= 0) && (dx < m) && (dy >= 0) && (dy < n) && (copiedBlocks[dy][dx] == 0)) {
                    copiedVirus.add(Pair(dy, dx))
                    copiedBlocks[dy][dx] = 2
                }
            }
        }

        val temp = copiedBlocks.sumOf { row -> row.count { it == 0 } }
        result = result.coerceAtLeast(temp)
    }

    fun makeThreeWall(count: Int, x: Int, y: Int) {
        if (count == 3) {
            search()
            return
        }

        for (i in x until n) {
            for (j in if (i == x) y until m else 0 until m) {
                if (blocks[i][j] == 0) {
                    blocks[i][j] = 1
                    makeThreeWall(count + 1, i, j)
                    blocks[i][j] = 0
                }
            }
        }
    }

    makeThreeWall(0, 0, 0)

    print(result)
}