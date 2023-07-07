import kotlin.math.abs

fun main() = with(System.`in`.bufferedReader()) {
    val n = readln().toInt()

    val lines = readln().split(" ").map { it.toInt() }
    lines.sorted()

    var head = 0
    var tail = lines.size - 1
    var mininum = Int.MAX_VALUE
    var result: Pair<Int, Int> = head to tail

    while (head < tail) {
        val sum = lines[head] + lines[tail]

        if (abs(sum) < mininum) {
            mininum = abs(sum)
            result = lines[head] to lines[tail]
        }

        if (sum < 0) head++
        else tail--
    }

    print("${result.first} ${result.second}")
}