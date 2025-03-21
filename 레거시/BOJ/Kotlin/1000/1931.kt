fun main() = with(System.`in`.bufferedReader()) {
    val n = readln().toInt()
    val room = mutableListOf<Pair<Int, Int>>()

    repeat (n) {
        val (x, y) = readln().split(" ").map { it.toInt() }
        room.add(x to y)
    }
    room.sortWith(compareBy({it.second}, {it.first}))

    var end = room[0].second; var cnt = 1
    for (i in 1 until n) {
        if (room[i].first >= end) {
            cnt += 1
            end = room[i].second
        }
    }

    println(cnt)
}