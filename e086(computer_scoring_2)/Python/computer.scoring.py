from sys import stdin, stdout
while True:
    line = stdin.readline().strip('\n')
    if not line: break
    num_of_subjects, num_of_students = map(int, line.split())
    subjects = {}
    subj_int_str = {}
    for subj in range(num_of_subjects):
        subject_number, subject_name, answer = stdin.readline().split()
        subj_int_str[int(subject_number)] = subject_number
        subjects[int(subject_number)] = [subject_name, answer]
    roster = {}
    stud_score = {}
    for stud in range(num_of_students):
        student_number, student_name = stdin.readline().split()
        roster[int(student_number)] = student_name
        stud_score[int(student_number)] = []
    for ans in range(num_of_subjects * num_of_students):
        student_number, subject_number, answer = stdin.readline().split()
        correct = 0
        correct_answer = subjects[int(subject_number)][1]
        for i in range(len(answer) if len(correct_answer) > len(answer) else len(correct_answer)):
            if (answer[i] == correct_answer[i]): correct += 1
        stud_score[int(student_number)].append([int(subject_number), correct * 100 // len(correct_answer)])
    for stud in range(1, num_of_students+1):
        stud_score[stud].sort(key = lambda s: s[0])
        for subj in range(1, num_of_subjects+1):
            stdout.write(f'{stud:03d},{roster[stud]},{subj_int_str[subj]},{subjects[subj][0]},{stud_score[stud][subj-1][1]}\n')
