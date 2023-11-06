import sys
import heapq

input = sys.stdin.readline

t = int(input()) + 1
while t := t - 1:
    que = []
    k = int(input())
    files = map(int, input().split(' '))

    for i in files:
        heapq.heappush(que, i)

    rst = 0
    while len(que) > 1:
        v1 = heapq.heappop(que)
        v2 = heapq.heappop(que)
        heapq.heappush(que, v1 + v2)
        rst += v1 + v2

    print(rst)
