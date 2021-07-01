from sys import stdin, stdout
from typing import List


# WA due to unexpected '\n' between test cases.
# Don't know how to fix.


def draw_line(lines: List[List[int]], point_1: List[int], point_2: List[int]) -> None:
    if point_1[0] != point_2[0]:
        start: int = min(point_1[0], point_2[0])
        end:   int = max(point_1[0], point_2[0])
        for i in range(start, end + 1):
            lines[i][point_1[1]] = '*'
    else:
        start: int = min(point_1[1], point_2[1])
        end:   int = max(point_1[1], point_2[1])
        for i in range(start, end + 1):
            lines[point_1[0]][i] = '*'
    return


while True:
    line: str = stdin.readline()
    if line == '\n':
        continue
    if not line:
        break

    n, m = map(int, line.split(' '))
    lines: List[List[str]] = [[' '] * (n + 2) for _ in range(0, n + 2)]

    # set the upper and lower bound
    for i in range(0, n + 2):
        lines[0][i] = '-';
        lines[n + 1][i] = '-';

    # set side bound
    for i in range(1, n + 1):
        lines[i][0] = '|'
        lines[i][n + 1] = '|'

    point_1: List[int] = [0, 0]
    point_2: List[int] = [0, 0]
    if m >= 2:
        point_1[0], point_1[1] = map(int, stdin.readline().split(' '))
        point_2[0], point_2[1] = map(int, stdin.readline().split(' '))

        draw_line(lines, point_1, point_2)
        m -= 2

    while m:
        m -= 1
        point_1[0] = point_2[0]
        point_1[1] = point_2[1]
        point_2[0], point_2[1] = map(int, stdin.readline().split(' '))

        draw_line(lines, point_1, point_2)

    # print the lines
    for i in range(0, n + 2):
        stdout.write(f"{''.join(lines[i])}\n")
