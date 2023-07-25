fun main() = with(System.`in`.bufferedReader()) {
    val n = readln().toInt()
    val line = readln()

    val count = mutableListOf(0, 0, 0, 0)
    var flag = 0

    for (i in 0 until n) {
        if (line[i] == 'R') flag = 1
        else {
            if (flag == 1) count[0]++
        }
    }

    flag = 0
    for (i in n - 1 downTo 0) {
        if (line[i] == 'R') flag = 1;
        else {
            if (flag == 1) count[1]++
        }
    }

    flag = 0
    for (i in 0 until n) {
        if (line[i] == 'B') flag = 1
        else {
            if (flag == 1) count[2]++
        }
    }

    flag = 0
    for (i in n - 1 downTo 0) {
        if (line[i] == 'B') flag = 1
        else {
            if (flag == 1) count[3]++
        }
    }

    println(count.min())
}