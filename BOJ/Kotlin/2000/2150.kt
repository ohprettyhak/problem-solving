import java.util.LinkedList

fun main() = with(System.`in`.bufferedReader()) {    
    val (v, e) = readln().split(" ").map { it.toInt() }
    
    val graph = Array<MutableList<Int>>(v + 1) { mutableListOf() }
    val scc: MutableList<MutableList<Int>> = mutableListOf()
    val visit = Array<Int>(v + 1, {0})
    val finished = Array<Boolean>(v + 1, {false})
    val stack = LinkedList<Int>()
    var id = 0
    
    repeat (e) {
        val (a, b) = readln().split(" ").map { it.toInt() }
        graph[a].add(b)
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

    for (i: Int in 1..v) if (visit[i] == 0) dfs(i)
    
    println(scc.size)
    for (i: Int in 0 until (scc.size)) scc[i].sort()
    scc.sortWith(compareBy({it[0]}))

    for (i: Int in 0 until (scc.size)) {
        for (j: Int in 0 until (scc[i].size)) print("${scc[i][j]} ")
        println("-1")
    }
}