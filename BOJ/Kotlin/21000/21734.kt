fun main() = with(System.`in`.bufferedReader()) {    
    val word = readln()

    word.forEach {
        var ascii = it.toInt()
        var size = 0
        while (ascii != 0) {
            size += (ascii % 10)
            ascii /= 10
        }

        for (i in 0 until size) print(it)
        println()
    }
}