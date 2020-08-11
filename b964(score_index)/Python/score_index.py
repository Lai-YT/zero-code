from sys import stdin

while True:
    number_of_students = stdin.readline()
    if not number_of_students: break
    number_of_students = int(number_of_students)
    scores = list(map(int, stdin.readline().split()))
    scores.sort()
    print(*scores)
    if scores[number_of_students-1] < 60:
        print(scores[number_of_students-1], 'worst case', sep = '\n')
    elif scores[0] >= 60:
        print('best case', scores[0], sep = '\n')
    else:
        worst, best = 0, 0
        for i in range(number_of_students-1):
            if (scores[i] < 60 and scores[i+1] >= 60):
                worst, best = scores[i], scores[i+1]
        print(worst, best, sep = '\n')
