import java.util.LinkedList

fun main() = with(System.`in`.bufferedReader()) {    
    val (n, m) = readln().split(" ").map { it.toInt() }
    
    val graph = Array<MutableList<Int>>(n + 1) { mutableListOf() }
    val scc: MutableList<MutableList<Int>> = mutableListOf()
    val visit = Array<Int>(n + 1, {0})
    val finished = Array<Boolean>(n + 1, {false})
    val stack = LinkedList<Int>()
    var id = 0
    
    repeat (m) {
        val (v, w) = readln().split(" ").map { it.toInt() }
        graph[v].add(w)
    }

    fun dfs(x: Int): Int {
        visit[x] = ++id
        stack.offer(x)

        var parent = visit[x]
        for (i: Int in 0 until graph[x].size) {
            var y = graph[x][i]
            if (visit[y] == 0) parent = Math.min(parent, dfs(y))
            else if (!finished[y]) parent = Math.min(parent, visit[y])
        }

        if (parent == visit[x]) {
            val linked = mutableListOf<Int>()
            while (true) {
                val top = stack.pollLast()
                linked.add(top)
                finished[top] = true
                if (top == x) break
            }
            scc.add(linked)
        }
        
        return parent
    }

    for (i: Int in 1..n) if (visit[i] == 0) dfs(i)
    
    if (scc.size == 1 && scc[0].size == n) println("Yes")
    else println("No")
}