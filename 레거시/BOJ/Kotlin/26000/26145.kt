fun main() = with(System.`in`.bufferedReader()) {    
    val (n, m) = readln().split(" ").map { it.toInt() }
    val s = readln().split(" ").map { it.toInt() }.toMutableList()

    val ans = IntArray(n + m, {0})
    for (i: Int in 0 until n) {
        val t = readln().split(" ").map { it.toInt() }
        t.forEachIndexed { index, it -> 
            s[i] -= it;
            ans[index] += it
        }
    }
    for (i: Int in 0 until n) { ans[i] += s[i] }
    
    ans.forEach { print("$it ") }
}