fun main() = with(System.`in`.bufferedReader()) {
    val n = readln().toInt()
    val problems = mutableListOf<Pair<Int, Int>>()

    repeat(n) {
        val (d, t) = readln().split(" ").map { it.toInt() }
        problems.add(Pair(d, t))
    }

    problems.sortWith(compareByDescending<Pair<Int, Int>> { it.second }.thenBy { it.first })

    var tail = problems[0].second
    var gap = 0

    problems.forEach {
        if (tail > it.second) tail = it.second
        gap = gap.coerceAtLeast(tail - it.second)
        tail -= it.first
    }
    gap = gap.coerceAtLeast(tail)

    print(gap)
}