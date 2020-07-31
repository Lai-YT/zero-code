from operator import itemgetter

while True:
    try:
        num_of_points = int(input())
        points = []
        for i in range(num_of_points):
            points.append(list(map(int, input().split())))
        sorted_points = sorted(points, key = itemgetter(0, 1))
        for point in sorted_points:
            print(*point)
    except: break
