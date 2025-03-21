fun main() = with(System.`in`.bufferedReader()) {    
    val n = readln().toInt()
    val value = readln().split(" ").toMutableList()

    value.sortWith(Comparator { x, y -> 
        if ((y + x).compareTo(x + y) == 0) y.compareTo(x)
        else (y + x).compareTo(x + y)
    })

    var zero = true
    value.forEach { if (it != "0") { zero = false; return@forEach } }
    
    if (zero) print(0)
    else value.forEach { print(it) }
}