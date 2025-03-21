class Solution {
    fun solution(n: Int, lighthouse: Array<IntArray>): Int {
        val graph = Array<MutableList<Int>>(n) { mutableListOf() }
        val light = Array(n) { 0 }
        val finished = Array(n) { false }

        lighthouse.forEach {
            graph[it[0] - 1].add(it[1] - 1)
            graph[it[1] - 1].add(it[0] - 1)
        }

        while (finished.contains(false)) {
            graph.forEachIndexed { index, node ->
                if (node.size == 1 && !finished[index]) {
                    val connectedNode = node[0]
                    light[connectedNode]++
                    finished[index] = true
                    finished[connectedNode] = true
                }
            }

            finished.forEachIndexed { index, value ->
                if (!value && graph[index].all { finished[it] }) {
                    graph[index].forEach { node ->
                        finished[node] = true
                    }
                    finished[index] = true
                }
            }

            graph.forEach { node -> node.removeAll { finished[it] } }
        }

        return light.count { it > 0 }
    }
}