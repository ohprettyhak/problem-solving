import java.util.LinkedList

fun main() = with(System.`in`.bufferedReader()) {
    lateinit var graph: Array<MutableList<Int>>

    // scc
    lateinit var scc: Array<Int>
    lateinit var visit: Array<Int>
    lateinit var stack: LinkedList<Int>
    lateinit var indegree: Array<Int>
    lateinit var finished: Array<Boolean>
    var id: Int = 0
    var cnt: Int = 0

    fun dfs(x: Int): Int {
        visit[x] = ++cnt
        stack.offer(x)
        
        var parent = visit[x]
        for (i: Int in 0 until graph[x].size) {
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
    val t = readln().toInt()
    repeat (t) {
        val (n, m) = readln().split(" ").map { it.toInt() }

        graph = Array<MutableList<Int>>(n + 1) { mutableListOf() }
        scc = Array<Int>(n + 1, {0})
        visit = Array<Int>(n + 1, {0})
        finished = Array<Boolean>(n + 1, {false})
        stack = LinkedList<Int>()
        id = 0
        cnt = 0
        
        repeat (m) {
            val (x, y) = readln().split(" ").map { it.toInt() }
            graph[x].add(y)
        }
        
        for (i: Int in 1..n) if (visit[i] == 0) dfs(i)

        indegree = Array<Int>(id + 1, {0})
        for (i: Int in 1..n) 
            graph[i].forEach { if (scc[it] != scc[i]) indegree[scc[it]]++; }

        var result: Int = 0
        for (i: Int in 0 until id) if (indegree[i] == 0) result += 1
        println(result)
    }
}