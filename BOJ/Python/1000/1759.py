import sys
from itertools import combinations

input = sys.stdin.readline

l, c = map(int, input().split())
characters = sorted(input().split())


def check_combination(comb):
    consonant, vowel = 0, 0
    for chars in comb:
        if chars in ['a', 'e', 'i', 'o', 'u']:
            vowel += 1
        else:
            consonant += 1
        if vowel >= 1 and consonant >= 2:
            return True
    return False


for password in combinations(characters, l):
    if check_combination(password):
        print(''.join(password))
