fun main() = with(System.`in`.bufferedReader()) {
    val n = readln().toInt()

    val score = mutableMapOf<String, Double>("A+" to 4.3, "A0" to 4.0, "A-" to 3.7, "B+" to 3.3, "B0" to 3.0, "B-" to 2.7, "C+" to 2.3, "C0" to 2.0, "C-" to 1.7, "D+" to 1.3, "D0" to 1.0, "D-" to 0.7, "F" to 0.0)

    var sum: Double = 0.0; var time: Double = 0.0
    repeat (n) {
        val line = readln().split(" ")
        time += line[1].toInt()
        sum += (line[1].toInt() * score[line[2]]!!)
    }

    val result = "%.2f".format(sum / time)
    println(result)
}