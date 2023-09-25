class Solution {
    fun solution(number: String, k: Int): String {
        val answer = StringBuilder()
        var idx = 0

        repeat(number.length - k) {
            var maxValue = '0'
            loop@ for (i in idx until k + it + 1) {
                if (number[i] > maxValue) {
                    maxValue = number[i]
                    idx = i + 1
                }
                if (maxValue == '9') break@loop
            }
            answer.append(maxValue)
        }

        return answer.toString()
    }
}
