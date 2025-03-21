import sys

input = sys.stdin.readline

memory = {}


def recursive(n, cur, sum, numbers):
    if (cur, sum) in memory:
        return memory[(cur, sum)]

    if sum < 0 or sum > 20:  # invalid value
        return 0

    if (n - 1) == cur:  # last value
        if sum == numbers[cur]:
            return 1
        return 0

    result = 0
    if cur != (n - 1):
        result += recursive(n, cur + 1, sum + numbers[cur], numbers)
        result += recursive(n, cur + 1, sum - numbers[cur], numbers)

    memory[(cur, sum)] = result
    return result


def main():
    n = int(input())
    numbers = list(map(int, input().split()))
    print(recursive(n, 1, numbers[0], numbers))


main()
