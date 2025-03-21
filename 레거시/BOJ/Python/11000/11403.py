import sys

input = sys.stdin.readline


def dfs(n, start, cur, matrix, visited):
    for i in range(n):
        if matrix[cur][i] == 1 and visited[start][i] == 0:
            visited[start][i] = 1
            dfs(n, start, i, matrix, visited)


def main():
    n = int(input())
    matrix = [list(map(int, input().split())) for _ in range(n)]
    visited = [[0] * n for _ in range(n)]

    for i in range(n):
        dfs(n, i, i, matrix, visited)

    for row in visited:
        print(' '.join(map(str, row)))


main()
