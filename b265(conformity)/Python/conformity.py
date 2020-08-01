from sys import stdin
while True:
    people = int(stdin.readline())
    if people == 0: break
    combinations = {}
    for i in range(people):
        comb = list(stdin.readline().split())
        comb = ''.join(sorted(comb))
        if comb in combinations: combinations[comb] += 1
        else: combinations[comb] = 1
    combinations = sorted(combinations.items(), key = lambda comb: comb[1], reverse = True)
    num_of_student = 0
    best = combinations[0][1]
    for comb in combinations:
        if comb[1] == best: num_of_student += best
        else: break
    print(num_of_student)
