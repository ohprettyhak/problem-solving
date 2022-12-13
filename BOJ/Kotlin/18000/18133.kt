import java.util.LinkedList

fun main() = with(System.`in`.bufferedReader()) {    
    val (n, m) = readln().split(" ").map { it.toInt() }
    val graph = Array<MutableList<Int>>(n + 1) { mutableListOf() }

    repeat (m) {
        val (x, y) = readln().split(" ").map { it.toInt() }
        graph[x].add(y)
    }

    // scc
    val scc = Array<Int>(n + 1, {0})
    val visit = Array<Int>(n + 1, {0})
    val finished = Array(n + 1, {false})
    val stack = LinkedList<Int>()
    var count = 0
    var id = 0
    
    fun dfs(x: Int): Int {
        visit[x] = ++count
        stack.offer(x)

        var parent = visit[x]
        graph[x].forEach { y -> 
            if (visit[y] == 0) parent = Math.min(parent, dfs(y))
            else if (!finished[y]) parent = Math.min(parent, visit[y])
        }

        if (parent == visit[x]) {
            while (true) {
                val top = stack.pollLast()
                scc[top] = id
                finished[top] = true
                if (top == x) break
            }
            id++
        }
        
        return parent
    }

    for (i in 1..n) if (visit[i] == 0) dfs(i)

    // indegree
    val indegree = Array(id, {0})
    for (i in 1..n) graph[i].forEach { if (scc[i] != scc[it]) indegree[scc[it]]++ }

    var result = 0
    for (i in 0 until id) if (indegree[i] == 0) result++
    println(result)
}