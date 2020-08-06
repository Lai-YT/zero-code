from sys import stdin, stdout
while True:
    line = stdin.readline()
    if not line: break
    num_of_problems = int(line)
    correct_answer = stdin.readline()
    num_of_students = int(stdin.readline())
    for student in range(num_of_students):
        answer = stdin.readline()
        correct = 0
        for i in range(num_of_problems if len(answer) > num_of_problems else len(answer)):
            if answer[i] == correct_answer[i]: correct += 1
        stdout.write(f'{(correct * 100) // num_of_problems}\n')
