import java.util.*

fun main() = with(System.`in`.bufferedReader()) {
    val m = readln().toInt()
    val s = mutableSetOf<Int>()
    val sb = StringBuilder()
     
    repeat (m) {
        val x = readln().split(" ")
        if (x[0] == "add") s.add(x[1].toInt())
        else if (x[0] == "remove") s.remove(x[1].toInt())
        else if (x[0] == "check") {
            if (s.contains(x[1].toInt())) sb.append("1 ")
            else sb.append("0 ")
        }
        else if (x[0] == "toggle") {
            if (s.contains(x[1].toInt())) s.remove(x[1].toInt())
            else s.add(x[1].toInt())
        }
        else if (x[0] == "all") for (i in 1..20) s.add(i)
        else if (x[0] == "empty") s.clear()
    }
    
    println(sb.toString())
}