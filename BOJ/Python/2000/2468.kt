import sys

sys.setrecursionlimit(100000)
input = sys.stdin.readline

n = int(input())
ground = [list(map(int, input().split(' '))) for _ in range(n)]


def search(x, y, height, visited):
    if x < 0 or x >= n or y < 0 or y >= n or visited[x][y] or ground[x][y] <= height:
        return

    visited[x][y] = True
    search(x - 1, y, height, visited)
    search(x + 1, y, height, visited)
    search(x, y - 1, height, visited)
    search(x, y + 1, height, visited)


def get_safe_areas_count(height):
    visited = [[False for _ in range(n)] for _ in range(n)]
    count = 0

    for i in range(n):
        for j in range(n):
            if not visited[i][j] and ground[i][j] > height:
                search(i, j, height, visited)
                count += 1

    return count


max_height = max(max(row) for row in ground)
max_count = 0
for h in range(0, max_height + 1):
    max_count = max(max_count, get_safe_areas_count(h))

print(max_count)
