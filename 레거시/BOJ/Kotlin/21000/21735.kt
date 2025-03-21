fun main() = with(System.`in`.bufferedReader()) {    
    val (n, m) = readln().split(" ").map { it.toInt() }
    val yard = readln().split(" ").map { it.toInt() }.toMutableList()
    yard.add(0, 0)

    var result = 0
    fun search(size: Int, pos: Int, time: Int) {
        if (time > m) return
        else result = Math.max(result, size)

        if (pos + 1 <= n) search(size + yard[pos + 1], pos + 1, time + 1)
        if (pos + 2 <= n) search((size / 2) + yard[pos + 2], pos + 2, time + 1)
    }
    
    search(1, 0, 0)
    
    println(result)
}