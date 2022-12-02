import java.util.*

fun main() = with(System.`in`.bufferedReader()) {
    val n = readln().toInt()
    val m = readln().toInt()

    val visit = BooleanArray(n + 1, {false})
    val graph = Array<MutableList<Int>>(n + 1) { mutableListOf<Int>() }
    repeat (m) {
        val (x, y) = readln().split(" ").map { it.toInt() }
        graph[x].add(y)
        graph[y].add(x)
    }

    val stack = LinkedList<Int>()
    stack.add(1); visit[1] = true
    
    while (stack.isNotEmpty()) {
        val tail = stack.removeLast()
        if (!visit[tail]) visit[tail] = true
        graph[tail].map { if (!visit[it]) stack.add(it) }
    }

    var rst = 0
    visit.forEach { if (it) rst++ }
    println(rst - 1)
}