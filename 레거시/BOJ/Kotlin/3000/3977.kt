import java.util.LinkedList

fun main() = with(System.`in`.bufferedReader()) {
    var t = readln().toInt()

    lateinit var graph: Array<MutableList<Int>>
    lateinit var scc: Array<Int>
    lateinit var visit: Array<Int>
    lateinit var finished: Array<Boolean>
    lateinit var stack: LinkedList<Int>
    var id = 0
    var cnt = 0

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

    // main
    while (t-- != 0) {
        val (n, m) = readln().split(" ").map { it.toInt() }

        graph = Array<MutableList<Int>> (n, {mutableListOf()})
        scc = Array<Int>(n, {0})
        visit = Array<Int>(n, {0})
        finished = Array<Boolean>(n, {false})
        stack = LinkedList<Int>()
        id = 0
        cnt = 0

        repeat (m) {
            val (x, y) = readln().split(" ").map { it.toInt() }
            graph[x].add(y)
        }

        for (i in 0 until n) if (visit[i] == 0) dfs(i)

        // indegree
        val sccGraph = Array<MutableList<Int>>(id) { mutableListOf() }
        val indegree = Array<Int>(id, {0})
        for (i in 0 until n) {
            graph[i].forEach { 
                if (scc[it] != scc[i]) {
                    indegree[scc[it]]++;
                    sccGraph[scc[i]].add(scc[it])
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

        var flag = true
        if (queue.size == 1) {
            for (i in 0 until id) {
                if (queue.isEmpty()) { flag = false; break }
                val x = queue.poll()
                sccGraph[x].forEach { if (--indegree[it] == 0) queue.add(it) }
            }
            if (flag) {
                val result = mutableListOf<Int>()
                for (i in 0 until n) if (scc[i] == start) result.add(i)
                result.forEach { println("${it} ")}
            }
        } else { flag = false }
        if (!flag) println("Confused")
        
        if (t != 0) { println(); readln() }
    }
}