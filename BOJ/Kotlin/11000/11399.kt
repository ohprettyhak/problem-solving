fun main() = with(System.`in`.bufferedReader()) {
    val n = readln().toInt()
    val input = readln().split(" ").map { it.toLong() }
    
    val ppl = ArrayList<Long>()
    input.forEach { ppl.add(it) }
    ppl.sort()

    var time: Long = 0; var temp: Long = 0
    ppl.forEach {
        temp += it
        time += temp
    }
    println(time)
}