class Solution {
    fun solution(board: Array<String>): Int {
        var oBinggo = 0
        var xBinggo = 0
        var o = 0
        var x = 0

        for (i in 0 until 3) {
            for (j in 0 until 3) {
                val cell = board[i][j]
                if (cell == 'O') o++
                if (cell == 'X') x++
            }
            if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
                if (board[i][0] == 'O') oBinggo++
                else if (board[i][0] == 'X') xBinggo++
            }
            if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
                if (board[0][i] == 'O') oBinggo++
                else if (board[0][i] == 'X') xBinggo++
            }
        }

        val diagonal1 = listOf(board[0][0], board[1][1], board[2][2])
        if (diagonal1.all { it == 'O' }) oBinggo++
        if (diagonal1.all { it == 'X' }) xBinggo++
        val diagonal2 = listOf(board[0][2], board[1][1], board[2][0])
        if (diagonal2.all { it == 'O' }) oBinggo++
        if (diagonal2.all { it == 'X' }) xBinggo++

        if (x > o || o > x + 1 || (oBinggo > 0 && o == x) || (xBinggo > 0 && o != x)) return 0

        return 1
    }
}
