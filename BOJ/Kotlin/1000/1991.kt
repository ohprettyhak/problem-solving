fun main() = with(System.`in`.bufferedReader()) {
    val n = readln().toInt()

    val tree = Array<Pair<Int?, Int?>>(n) { Pair(null, null) }
    repeat(n) {
        val (node, left, right) = readln().split(" ")
        tree[node[0] - 'A'] =
            Pair(if (left[0] != '.') left[0] - 'A' else null, if (right[0] != '.') right[0] - 'A' else null)
    }

    preorder(tree, 0)
    println()
    inorder(tree, 0)
    println()
    postorder(tree, 0)
}

fun preorder(tree: Array<Pair<Int?, Int?>>, node: Int?) {
    if (node == null) return
    print((node + 'A'.code).toChar())
    preorder(tree, tree[node].first)
    preorder(tree, tree[node].second)
}

fun inorder(tree: Array<Pair<Int?, Int?>>, node: Int?) {
    if (node == null) return
    inorder(tree, tree[node].first)
    print((node + 'A'.code).toChar())
    inorder(tree, tree[node].second)
}

fun postorder(tree: Array<Pair<Int?, Int?>>, node: Int?) {
    if (node == null) return
    postorder(tree, tree[node].first)
    postorder(tree, tree[node].second)
    print((node + 'A'.code).toChar())
}