fun main() {
    val n = readln().toInt()
    val people = readln().split(" ").map { it.toInt() }

    var sum = 0
    people.forEach { sum += if (n >= it) it else n }

    println(sum)
}