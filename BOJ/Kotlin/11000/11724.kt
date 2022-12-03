fun main() {
    val (n, m) = readln().split(" ").map { it.toInt() }
    val graph = Array<MutableList<Int>>(n + 1) { mutableListOf() }
    val visit = BooleanArray(n + 1, {false})

    repeat (m) {
        val (x, y) = readln().split(" ").map { it.toInt() }
        graph[x].add(y)
        graph[y].add(x)
    }

    fun search(x:Int) {
        visit[x] = true
        graph[x].forEach { if (!visit[it]) search(it) }
    }

    var count = 0
    for (i:Int in 1..n) {
        if (!visit[i]) {
            count += 1
            search(i)
        }
    }

    println(count)
}