fun main() = with(System.`in`.bufferedReader()) {    
    val line = readln().split("-")
    val value = mutableListOf<Int>()
    
    line.forEach {
        val plus = it.split("+").map { it.toInt() }
        var sum = 0
        plus.forEach { v -> sum += v}
        value.add(sum)
    }

    var result = value[0]
    for (i in 1 until value.size) result -= value[i]
    println(result)
}