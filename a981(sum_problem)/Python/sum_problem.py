from sys import stdin, stdout
from typing import List


# Since a single boolean is immutable.
result_exist: List[bool] = [False]


def next_number(numbers: List[int], choosed: List[int],
                target: int, cur_sum: int, pos: int, choose_pos: int) -> None:
    if cur_sum == target:
        stdout.write(f"{' '.join(map(str, choosed[:choose_pos]))}\n")
        result_exist[0] = True
        return

    for i in range(pos, len(numbers)):
        if numbers[i] > target - cur_sum:
            break
        choosed[choose_pos] = numbers[i]
        next_number(numbers, choosed, target, cur_sum + numbers[i], i + 1, choose_pos + 1)


while True:
    line: str = stdin.readline()
    if not line:
        break
    num_of_nums, target = map(int, line.split())
    numbers: List[int] = list(map(int, stdin.readline().split()))
    numbers.sort()
    choosed: List[int] = list([0] * num_of_nums)
    result_exist[0] = False

    for i in range(0, num_of_nums):
        if numbers[i] > target:
            break
        choosed[0] = numbers[i]
        next_number(numbers, choosed, target, numbers[i], i + 1, 1)

    if not result_exist[0]:
        stdout.write('-1\n')
