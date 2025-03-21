import java.util.LinkedList

fun main() = with(System.`in`.bufferedReader()) {
    val (n, k) = readln().split(" ").map { it.toInt() }

    var result = Integer.MAX_VALUE
    val queue = LinkedList<Pair<Int, Int>>()
    val visit = Array<Boolean>(200001, {false})
    queue.add(Pair(n, 0))
    
    while (queue.isNotEmpty()) {
        val (x, value) = queue.poll()
        visit[x] = true
        if (x == k) result = Math.min(result, value)
        
        if (x - 1 >= 0 && !visit[x - 1]) 
            queue.add(Pair(x - 1, value + 1))
        if (x + 1 >= 0 && x + 1 < 200001 && !visit[x + 1]) 
            queue.add(Pair(x + 1, value + 1))
        if (x * 2 >= 0 && x * 2 < 200001 && !visit[x * 2]) 
            queue.add(Pair(x * 2, value + 1))
    }
    println(result)
}