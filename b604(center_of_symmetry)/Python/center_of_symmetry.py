from sys import stdin
from functools import cmp_to_key

def compare(former, latter):
    if former[0] == latter[0]: return former[1] - latter[1]
    return former[0] - latter[0]

while True:
    num_of_points = int(stdin.readline())
    if num_of_points == 0: break
    points = []
    center_x, center_y = 0, 0
    for p in range(num_of_points):
        x, y = map(int, stdin.readline().split())
        center_x += x
        center_y += y
        points.append((x, y))
    center_x /= num_of_points
    center_y /= num_of_points
    points.sort(key = cmp_to_key(compare))
    for i in range(num_of_points // 2):
        if points[i][0] + points[num_of_points-1-i][0] != center_x * 2 \
        or points[i][1] + points[num_of_points-1-i][1] != center_y * 2:
            print('no')
            break
    else: print('yes')
