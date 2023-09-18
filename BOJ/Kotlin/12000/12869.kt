import java.util.*
import kotlin.collections.HashSet
import kotlin.math.min

val mutalisk = arrayOf(
    intArrayOf(1, 3, 9),
    intArrayOf(1, 9, 3),
    intArrayOf(3, 1, 9),
    intArrayOf(3, 9, 1),
    intArrayOf(9, 3, 1),
    intArrayOf(9, 1, 3)
)

fun main() = with(System.`in`.bufferedReader()) {
    val n = readln().toInt()
    val scv = IntArray(3) { 0 }
    val input = readln().split(" ").map { it.toInt() }
    repeat(n) { scv[it] = input[it] }

    val memory = HashSet<String>()
    val queue: Queue<Pair<IntArray, Int>> = LinkedList()
    queue.add(Pair(intArrayOf(scv[0], scv[1], scv[2]), 0))

    var rtn = Int.MAX_VALUE
    while (queue.isNotEmpty()) {
        val (current, count) = queue.poll()

        val temp = "${current[0]}:${current[1]}:${current[2]}"
        if (memory.contains(temp)) continue
        memory.add(temp)

        if (current[0] <= 0 && current[1] <= 0 && current[2] <= 0) {
            rtn = min(rtn, count)
            continue
        }

        for (i in 0 until 6) {
            queue.add(
                Pair(
                    intArrayOf(current[0] - mutalisk[i][0], current[1] - mutalisk[i][1], current[2] - mutalisk[i][2]),
                    count + 1
                )
            )
        }
    }

    println(rtn)
}