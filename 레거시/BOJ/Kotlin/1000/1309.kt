fun main() = with(System.`in`.bufferedReader()) {
    val n = readln().toInt()

    // initialize first line to 1
    val empty: IntArray = IntArray(n + 1) { 1 }
    val left: IntArray = IntArray(n + 1) { 1 }
    val right: IntArray = IntArray(n + 1) { 1 }

    // empty = empty + left + right
    // left = empty + right (left is restricted)
    // right = empty + left (right is restricted)
    for (i in 2..n) {
        empty[i] = (empty[i - 1] + left[i - 1] + right[i - 1]) % 9901
        left[i] = (empty[i - 1] + right[i - 1]) % 9901
        right[i] = (empty[i - 1] + left[i - 1]) % 9901
    }

    println((empty[n] + left[n] + right[n]) % 9901)
}