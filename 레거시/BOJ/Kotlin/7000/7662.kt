import java.util.*
import java.io.*

fun main() {
    val br = BufferedReader(InputStreamReader(System.`in`))
    val bw = BufferedWriter(OutputStreamWriter(System.out))
    val t = br.readLine().toInt()
    
    repeat (t) {
        var k = br.readLine().toInt()
        val tree = TreeMap<Int, Int>()
        
        while (k-- > 0) {
            val (c, n) = br.readLine().split(" ")
            if (c == "I") tree[n.toInt()] = tree.getOrDefault(n.toInt(), 0) + 1
            else {
                if (tree.isEmpty()) continue
                if (n == "1") {
                    if (tree[tree.lastKey()!!] != 1) tree[tree.lastKey()!!] = tree[tree.lastKey()!!]!!.minus(1)
                    else tree.remove(tree.lastKey())
                } else {
                    if (tree[tree.firstKey()!!] != 1) tree[tree.firstKey()!!] = tree[tree.firstKey()!!]!!.minus(1)
                    else tree.remove(tree.firstKey())
                }
            }
        }
    
        if (tree.isNotEmpty()) bw.write("${tree.lastKey()} ${tree.firstKey()}\n")
        else bw.write("EMPTY\n")
    }

    bw.flush()
    bw.close()
}