from sys import stdin, stdout


for line in stdin:
    num_of_problems = int(line)
    correct_answer: str = stdin.readline()
    num_of_students = int(stdin.readline())

    # stores the answers in str and compare them directly by indexing
    for _ in range(num_of_students):
        answer: str = stdin.readline()
        correct: int = 0
        # too much not count, not enough no penalty
        for i in range(num_of_problems if len(answer) > num_of_problems else len(answer)):
            if answer[i] == correct_answer[i]:
                correct += 1
        stdout.write(f'{(correct * 100) // num_of_problems}\n')
