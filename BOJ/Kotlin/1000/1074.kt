fun main() = with(System.`in`.bufferedReader()) {
    val (n, r, c) = readln().split(" ").map { it.toInt() }

    var result = 0
    fun recursive(x: Int, y: Int, size: Int) {
        if (x == c && y == r) {
            println(result)
            return
        }
        if (x + size > c && x <= c && y + size > r && y <= r) {
            recursive(x, y, size / 2)
            recursive(x + (size / 2), y, size / 2)
            recursive(x, y + (size / 2), size / 2)
            recursive(x + (size / 2), y + (size / 2), size / 2)
        } else {
            result += (size * size)
        }
    }
    
    recursive(0, 0, Math.pow(2.0, n.toDouble()).toInt())
}