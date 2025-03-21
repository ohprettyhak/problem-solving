fun main() = with(System.`in`.bufferedReader()) {    
    val n = readln().toInt()

    val graph: MutableList<MutableList<Int>> = mutableListOf()
    repeat (n) {
        val line = readln().split(" ").map { it.toInt() }.toMutableList()
        graph.add(line)
    }

    var blue = 0; var white = 0
    
    fun solution(x: Int, y: Int, size: Int) {
        val color = graph[x][y]
        for (i in x until (x + size)) {
            for (j in y until (y + size)) {
                if (color != graph[i][j]) {
                    solution(x, y, size / 2)
                    solution(x + (size / 2), y, size / 2)
                    solution(x, y + (size / 2), size / 2)
                    solution(x + (size / 2), y + (size / 2), size / 2)
                    return
                }
            }
        }
        if (color == 0) white += 1
        else blue += 1
    }

    solution(0, 0, n)
    println("${white}\n${blue}")
}