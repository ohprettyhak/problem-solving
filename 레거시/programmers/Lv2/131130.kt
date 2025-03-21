class Solution {
    fun solution(cards: IntArray): Int {
        val groups = mutableListOf<Int>()
        val visited = BooleanArray(cards.size + 1) { false }

        fun search(start: Int): Int {
            var count = 0
            var pos = start
            while (!visited[pos]) {
                visited[pos] = true
                count++
                pos = cards[pos - 1]
            }
            return count
        }

        for (i in 1..cards.size) if (!visited[i]) groups.add(search(i))

        if (groups.size < 2) return 0

        groups.sortDescending()
        return groups[0] * groups[1]
    }
}