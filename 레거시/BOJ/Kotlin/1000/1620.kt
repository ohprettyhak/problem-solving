fun main() = with(System.`in`.bufferedReader()) {
    val (n, m) = readln().split(" ").map { it.toInt() }
    val list = mutableMapOf<String, String>()
    
    for (i:Int in 1..n) {
        val pokemon = readln()
        list.put(i.toString(), pokemon)
        list.put(pokemon, i.toString())
    }

    repeat (m) { println(list[readln()]) }
}