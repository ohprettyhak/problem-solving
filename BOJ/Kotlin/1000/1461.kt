import java.util.*

fun main() = with(System.`in`.bufferedReader()) {
    val (n, m) = readln().split(" ").map { it.toInt() }
    val input = readln().split(" ").map { it.toInt() }

    val positive = PriorityQueue<Int>(reverseOrder())
    val negative = PriorityQueue<Int>(reverseOrder())

    for (position in input) {
        if (position > 0) positive.add(position)
        else negative.add(-position)
    }

    var result = 0

    if (positive.isNotEmpty() && negative.isNotEmpty()) {
        if (positive.peek() > negative.peek()) {
            result += positive.peek()
            for (i in 0 until m) if (positive.isNotEmpty()) positive.poll()
        } else {
            result += negative.peek()
            for (i in 0 until m) if (negative.isNotEmpty()) negative.poll()
        }
    } else {
        if (positive.isNotEmpty()) {
            result += positive.peek()
            for (i in 0 until m) if (positive.isNotEmpty()) positive.poll()
        } else {
            result += negative.peek()
            for (i in 0 until m) if (negative.isNotEmpty()) negative.poll()
        }
    }

    while (positive.isNotEmpty()) {
        result += (positive.peek() * 2)
        for (i in 0 until m) if (positive.isNotEmpty()) positive.poll()
    }

    while (negative.isNotEmpty()) {
        result += (negative.peek() * 2)
        for (i in 0 until m) if (negative.isNotEmpty()) negative.poll()
    }

    println(result)
}
