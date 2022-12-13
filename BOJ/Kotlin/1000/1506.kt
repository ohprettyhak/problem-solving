import java.util.LinkedList

fun main() = with(System.`in`.bufferedReader()) {    
    val n = readln().toInt()
    val value = readln().split(" ").map { it.toInt() }
    val graph = Array<MutableList<Int>>(n) { mutableListOf() }

    repeat (n) { i ->
        val route = readln()
        route.forEachIndexed { v, it -> if (it == '1') graph[i].add(v) }
    }

    // scc
    val scc = mutableListOf<MutableList<Int>>()
    val visit = Array<Int>(n, {0})
    val finished = Array(n, {false})
    val stack = LinkedList<Int>()
    var count = 0
    
    fun dfs(x: Int): Int {
        visit[x] = ++count
        stack.offer(x)

        var parent = visit[x]
        for (i in 0 until graph[x].size) {
            val y = graph[x][i]
            if (visit[y] == 0) parent = Math.min(parent, dfs(y))
            else if (!finished[y]) parent = Math.min(parent, visit[y])
        }

        if (parent == visit[x]) {
            val temp = mutableListOf<Int>()
            while (true) {
                val top = stack.pollLast()
                temp.add(top)
                finished[top] = true
                if (top == x) break
            }
            scc.add(temp)
        }
        
        return parent
    }

    for (i in 0 until n) if (visit[i] == 0) dfs(i)

    var result = 0
    scc.forEach { 
        it.sort()
        var temp = Integer.MAX_VALUE
        it.forEach { v -> temp = Math.min(temp, value[v]) }
        result += temp
    }
    println(result)
}