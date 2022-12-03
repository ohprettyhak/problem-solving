import java.io.*

fun main() = with(System.`in`.bufferedReader()) {
    val bw = BufferedWriter(OutputStreamWriter(System.out))
    
    val (n, m) = readln().split(" ").map { it.toInt() }
    val inputs = readln().split(" ").map { it.toInt() }

    val sum = mutableListOf<Int>(0, inputs[0])
    for (i: Int in 2..n) sum.add(sum[i - 1] + inputs[i - 1])

    repeat (m) {
        val (x, y) = readln().split(" ").map { it.toInt() }
        val ans = sum[y] - sum[x - 1]
        bw.write("$ans ")
    }
    
    bw.flush()
    bw.close()
}