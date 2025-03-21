class Solution {
    fun solution(numbers: IntArray, target: Int): Int {
        var answer: Int = 0

        fun search(now: Int, index: Int) {
            if (index == numbers.size && now == target) {
                answer++;
                return
            }
            if (index >= numbers.size) return
            search(now + numbers[index], index + 1)
            search(now - numbers[index], index + 1)
        }

        search(0, 0);

        return answer
    }
}