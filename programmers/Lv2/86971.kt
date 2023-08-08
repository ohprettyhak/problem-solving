import java.util.LinkedList

class Solution {
    fun solution(n: Int, wires: Array<IntArray>): Int {
        var answer: Int = Int.MAX_VALUE

        fun search(start: Int, tree: Array<MutableList<Int>>): Int {
            var count = 0
            val queue = LinkedList<Int>()
            val visit = Array<Boolean>(n) { false }

            queue.add(start)
            visit[start] = true
            count++

            while (queue.isNotEmpty()) {
                val value = queue.pop()
                tree[value].forEach {
                    if (!visit[it]) {
                        visit[it] = true
                        count++
                        queue.add(it)
                    }
                }
            }

            return count
        }

        repeat(n) { it ->
            val tree = Array<MutableList<Int>>(n) { mutableListOf() }

            wires.forEachIndexed { index, wire ->
                if (it != index) {
                    tree[wire[0] - 1].add(wire[1] - 1)
                    tree[wire[1] - 1].add(wire[0] - 1)
                }
            }

            val count = search(0, tree)
            println(count)
            answer = answer.coerceAtMost(kotlin.math.abs(count - (n - count)))
        }

        return answer
    }
}