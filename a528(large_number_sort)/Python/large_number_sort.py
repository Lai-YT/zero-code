from functools import cmp_to_key
from sys import stdin, stdout
def compare(left: str, right: str) -> int:
    if left[0] != '-' and right[0] != '-':
        if len(left) < len(right): return -1
        if len(left) > len(right): return 1
        for i in range(len(left)):
            if left[i] < right[i]: return -1
            if left[i] > right[i]: return 1
        return 0
    if left[0] == '-' and right[0] != '-': return -1
    if left[0] != '-' and right[0] == '-': return 1
    if left[0] == '-' and right[0] == '-':
        if len(left) > len(right): return -1
        if len(left) < len(right): return 1
        for i in range(1, len(left)):
            if left[i] > right[i]: return -1
            if left[i] < right[i]: return 1
        return 0


while True:
    num_of_nums = stdin.readline().strip('\n')
    if not num_of_nums: break
    numbers = []
    for i in range(int(num_of_nums)):
        numbers.append(stdin.readline().strip('\n'))
    sorted_numbers = sorted(numbers, key = cmp_to_key(compare))
    for n in sorted_numbers:
        stdout.write(f'{n}\n')
