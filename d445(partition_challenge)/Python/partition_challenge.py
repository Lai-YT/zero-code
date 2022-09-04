
'''
Intuition:

If sum is odd -> 0
1 (1) -> 0
2 (3) -> 0
3 (6) -> 1: {(1, 2), (3,)}
4 (10) -> 1: {(1, 4), (2, 3)}
5 (15) -> 0
6 (21) -> 0
7 (28 = 14 + (7 + 7)): find sum 7 from 1 ~ 6
8 (36 = 18 + (10 + 8)): find sum 10 from 1 ~ 7

So, the problem is now to find a specific sum from the numbers.
'''

from sys import stdin, stdout

memo = {}


def main() -> None:
    ways = []
    for n in map(int, stdin):
        ways.append(count_partition_of_one_to_n(n))
    stdout.writelines([f'{way}\n' for way in ways])


def count_partition_of_one_to_n(n: int) -> int:
    sum_: int = sum_from_one_up_to_n(n)
    if is_odd(sum_):
        return 0
    return count_way_to_sum_from_one_to_n(sum_ // 2 - n, n - 1)


def is_odd(n: int) -> bool:
    return n % 2 != 0


def sum_from_one_up_to_n(n: int) -> int:
    return sum(range(1, n + 1))


def count_way_to_sum_from_one_to_n(target_sum: int, n: int) -> int:
    if target_sum == 0:
        return 1
    if n < 1:
        return 0
    try:
        return memo[target_sum][n]
    except KeyError:
        include: int = count_way_to_sum_from_one_to_n(target_sum - n, n - 1)
        exclude: int = count_way_to_sum_from_one_to_n(target_sum, n - 1)
        way: int = include + exclude
        if target_sum in memo:
            memo[target_sum][n] = way
        else:
            memo[target_sum] = {n: way}
        return way


if __name__ == '__main__':
    main()
