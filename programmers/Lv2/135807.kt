import kotlin.math.max

class Solution {
    fun solution(arrayA: IntArray, arrayB: IntArray): Int {
        val gdcA = arrayA.reduce { acc, number -> findGCD(acc, number) }
        val gdcB = arrayB.reduce { acc, number -> findGCD(acc, number) }

        println("$gdcA $gdcB")

        var result = 0
        var temp: Boolean = true

        arrayA.forEach { number ->
            if (number % gdcB == 0) temp = false
        }
        if (temp) result = max(result, gdcB)

        temp = true
        arrayB.forEach { number ->
            if (number % gdcA == 0) temp = false
        }
        if (temp) result = max(result, gdcA)

        return result
    }
}

fun findGCD(a: Int, b: Int): Int {
    if (b == 0) return a
    return findGCD(b, a % b)
}