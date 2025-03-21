fun main() = with(System.`in`.bufferedReader()) {
    val a = readln()
    var b = readln()

    val result: Int
    while (true) {
        if (a.length == b.length) {
            result = if (a == b) 1 else 0
            break
        }

        b = if (b[b.length - 1] == 'A') b.dropLast(1)
        else b.dropLast(1).reversed()
    }
    print(result)
}