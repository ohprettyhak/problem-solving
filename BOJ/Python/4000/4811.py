import sys

input = sys.stdin.readline

memory = {}


def recursive(w: int, h: int):
    if f'{w}-{h}' in memory:
        return memory[f'{w}-{h}']

    if w == 0 and h == 1:
        return 1
    elif w > 0 and h == 0:
        return recursive(w - 1, h + 1)

    result = 0
    if w > 0:
        result += recursive(w - 1, h + 1)
    if h > 0:
        result += recursive(w, h - 1)
    memory[f'{w}-{h}'] = result
    return result


def main():
    while True:
        n = int(input())
        if n == 0:
            break
        print(recursive(n, 0))


main()
