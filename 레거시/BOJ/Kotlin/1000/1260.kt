import java.util.*
import java.lang.StringBuilder

fun main() = with(System.`in`.bufferedReader()) {
    val (n, m, v) = readln().split(" ").map { it.toInt() }
    
    val graph = Array<MutableList<Int>>(n + 1) { mutableListOf<Int>() }
    repeat (m) {
        val (x, y) = readln().split(" ").map { it.toInt() }
        graph[x].add(y)
        graph[y].add(x)
    }

    fun dfs(): String {
        val sb = StringBuilder()
        val visit = BooleanArray(n + 1, {false})
        val stack = LinkedList<Int>()

        graph.map { it.sortDescending() }
        stack.add(v); visit[v] = true
        sb.append("${v} ")
        
        while (stack.isNotEmpty()) {
            val tail = stack.removeLast()
            if (!visit[tail]) { sb.append("${tail} "); visit[tail] = true }
            graph[tail].map { if (!visit[it]) stack.add(it) }
        }
        
        return sb.toString()
    }

    fun bfs(): String {
        val sb = StringBuilder()
        val visit = BooleanArray(n + 1, {false})
        val queue = mutableListOf<Int>()

        graph.map { it.sort() }
        queue.add(v); visit[v] = true
        sb.append("${v} ")

        while (queue.isNotEmpty()) {
            val tail = queue.removeFirst()
            graph[tail].map {
                if (!visit[it]) {
                    queue.add(it); sb.append("${it} ");
                    visit[it] = true
                }
            }
        }
        
        return sb.toString()
    }

    println(dfs())
    println(bfs())
}