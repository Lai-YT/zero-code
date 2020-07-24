from sys import stdin, stdout
while True:
    num_of_people = int(input())
    if not num_of_people: break
    age_list = [0] * 100
    for age in map(int, stdin.readline().split()):
        age_list[age] += 1
    for i in range(100):
        if age_list[i] != 0:
            stdout.write((str(i) + ' ') * age_list[i])
    print()
