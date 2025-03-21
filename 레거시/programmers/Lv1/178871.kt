class Solution {
    fun solution(players: Array<String>, callings: Array<String>): MutableList<String> {
        val playerMap: MutableMap<String, Int> = LinkedHashMap<String, Int>().apply {
            players.forEachIndexed { index, player ->
                this[player] = index
            }
        }

        val answer: MutableList<String> = players.toMutableList()

        callings.forEach {
            val idx = playerMap[it]
            if (idx != null) {
                val previousIndex = idx - 1
                val previousPlayer = answer[previousIndex]

                playerMap[it] = previousIndex
                playerMap[previousPlayer] = idx

                answer[previousIndex] = it
                answer[idx] = previousPlayer
            }
        }

        return answer
    }
}
