import java.util.LinkedList

fun main() = with(System.`in`.bufferedReader()) {
    val (n, m) = readln().split(" ").map { it.toInt() }

    val graph = Array<MutableList<Int>>(n) { mutableListOf() }
    val scc = Array<Int>(n, {0})
    val visit = Array<Int>(n, {0})
    val finished = Array<Boolean>(n, {false})
    val stack = LinkedList<Int>()
    var id = 0
    var cnt = 0
    
    repeat (m) {
        val (x, y) = readln().split(" ").map { it.toInt() }
        graph[x].add(y)
    }

    // scc 
    fun dfs(x: Int): Int {
        visit[x] = ++cnt
        stack.offer(x)
        
        var parent = visit[x]
        for (i in 0 until graph[x].size) {
            var y = graph[x][i]
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
            id += 1
        }
        
        return parent
    }
    
    for (i in 0 until n) if (visit[i] == 0) dfs(i)

    // indegree
    val indegree = Array<Int>(id, {0})
    for (i in 0 until n) graph[i].forEach { if (scc[it] != scc[i]) indegree[scc[it]]++; }

    var result = 0
    for (i in 0 until id) if (indegree[i] == 0) result++
    println(result)
}