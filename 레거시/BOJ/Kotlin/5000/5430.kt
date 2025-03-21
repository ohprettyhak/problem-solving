fun main() = with(System.`in`.bufferedReader()) {
    val t = readln().toInt()
    val sb = StringBuilder()
    
    repeat (t) {
        val p = readln()
        val n = readln().toInt()
        val numbers = readln().replace("[", "").replace("]", "").trim().split(",").toMutableList()
        if (numbers.size == 1 && numbers[0] == "") numbers.removeAt(0)
        
        var error = false
        var reverse = false  // true: right, false: false
        for (i in 0 until p.length) {
            if (p[i] == 'R') reverse = !reverse
            else {
                if (numbers.size == 0) { error = true; break }
                else {
                    if (reverse) numbers.removeAt(numbers.size - 1)
                    else numbers.removeAt(0)
                }
            }
        }
        if (error) sb.append("error ")
        else {
            if (reverse) sb.append("${numbers.reversed().joinToString(prefix = "[", postfix = "]", separator = ",")} ")
            else sb.append("${numbers.joinToString(prefix = "[", postfix = "]", separator = ",")} ")
        }
    }

    println(sb.toString())
}