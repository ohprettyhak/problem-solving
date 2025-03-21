import java.util.LinkedList

fun main() = with(System.`in`.bufferedReader()) {
    val (n, m) = readln().split(" ").map { it.toInt() }

    val graph = Array<MutableList<Int>>(n + 1) { mutableListOf() }
    val scc = Array<Int>(n + 1, {0})
    val visit = Array<Int>(n + 1, {0})
    val finished = Array<Boolean>(n + 1, {false})
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
    
    for (i in 1..n) if (visit[i] == 0) dfs(i)

    // indegree
    val sccGraph = Array<MutableList<Int>>(id) { mutableListOf() }
    val indegree = Array<Int>(id + 1, {0})
    for (i in 1..n) {
        graph[i].forEach { 
            if (scc[it] != scc[i]) {
                sccGraph[scc[i]].add(scc[it])
                indegree[scc[it]]++;
            }
        }
    }

    // topology sort
    val queue = LinkedList<Int>()
    var start = 0
    for (i in 0 until id) {
        if (indegree[i] == 0) {
            queue.add(i)
            start = i
        }
    }
    
    if (queue.size == 1) {
        for (i in 0 until id) {
            if (queue.isEmpty() || queue.size > 1) {
                println(0)
                return
            }
            val x = queue.poll()
            sccGraph[x].forEach { if (--indegree[it] == 0) queue.add(it) }
        }
    
        val result = mutableListOf<Int>()
        for (i in 1..n) if (scc[i] == start) result.add(i)
        println(result.size)
        result.forEach { print("${it} ")}
    } else {
        println(0)
    }
}