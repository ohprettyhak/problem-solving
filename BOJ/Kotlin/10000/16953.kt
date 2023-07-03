fun main() = with(System.`in`.bufferedReader()) {
    val (a, b) = readln().split(" ").map { it.toLong() }
    var result = Long.MAX_VALUE

    fun search(value: Long, count: Long) {
        if (value == b) result = Math.min(result, count)

        val time = value * 2
        val plus = (value.toString() + '1').toLong()

        if (time <= b) search(time, count + 1)
        if (plus <= b) search(plus, count + 1)
    }

    search(a, 1)
    print(if (result == Long.MAX_VALUE) -1 else result)
}