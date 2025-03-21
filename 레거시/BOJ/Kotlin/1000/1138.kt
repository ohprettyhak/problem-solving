fun main() = with(System.`in`.bufferedReader()) {
    val n = readLine().toInt()
    val people = readLine().split(" ").map { it.toInt() }

    val result = MutableList(n) { -1 }

    for (i in 0 until n) {
        var pos = 0
        for (j in 0 until n) {
            if (result[j] == -1) {
                if (pos == people[i]) {
                    result[j] = i + 1
                    break
                } else {
                    pos++
                }
            }
        }
    }

    println(result.joinToString(" "))
}
