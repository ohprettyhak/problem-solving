fun main() = with(System.`in`.bufferedReader()) {
    val n = readln().toInt()
    val snow = readln().split(" ").map { it.toInt() }.toMutableList()
    snow.sortDescending()

    var result = 0
    while (snow.isNotEmpty()) {
        if (snow.size > 1) {
            snow[0] -= 1
            snow[1] -= 1
            result += 1
            if (snow[1] == 0) snow.removeAt(1)
            if (snow[0] == 0) snow.removeAt(0)
            snow.sortDescending()
        } else {
            snow[0] -= 1
            result += 1
            if (snow[0] == 0) snow.removeAt(0)
        }
    }

    if (result > 1440) println(-1)
    else println(result)
}