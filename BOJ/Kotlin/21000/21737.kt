fun main() = with(System.`in`.bufferedReader()) {    
    val n = readln().toInt()
    val line = readln()
    
    val sb = StringBuilder()
    val value = mutableListOf<Long>()
    val command = mutableListOf<Char>()

    var temp = StringBuilder(); 
    var output = false
    line.forEachIndexed { i, it ->
        if (it == 'S' || it == 'M' || it == 'U' || it == 'P' || it == 'C' || i == line.length - 1) {
            if ('0' > it || it > '9') command.add(it)
            val number = temp.toString()
            temp.setLength(0)
            if (number.length != 0) value.add(number.toLong())
            if (it == 'C') output = true
        } else {
            temp.append(it)
        }
    }
    
    var result = value[0]; var pos = 0
    command.forEach {
        if (pos == value.size - 1 && it != 'C') return@forEach
        
        if (it == 'S') {
            result -= value[++pos]
        } else if (it == 'M') {
            result *= value[++pos]
        } else if (it == 'U') {
            if (result < 0) result = -1 * (-1 * result / value[++pos])
            else result /= value[++pos]
        } else if (it == 'P') {
            result += value[++pos]
        } else if (it == 'C') {
            sb.append("$result ")
        }
    }
    
    if (output) println(sb.toString())
    else println("NO OUTPUT")
}