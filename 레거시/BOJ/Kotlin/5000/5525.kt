fun main() {
    val n = readln().toInt()
    val m = readln().toInt()
    val s = readln()

    var result = 0
    var i = 1

    while (i < m) {
        if (s[i] != 'O') {
            var count = 0
            while (i + 2 < m && s[i + 1] == 'O' && s[i + 2] == 'I') {
                count += 1
                if (count == n) { count -= 1; result += 1 }
                i += 2
            }
        }
        i += 1
    }

    println(result)
}