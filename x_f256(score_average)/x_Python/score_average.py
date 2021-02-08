from sys import stdin, stdout
total_score = 0
total_credit = 0
while True:
    line = stdin.readline()
    if not line: break
    score, credit = map(int, line.split())
    total_score += score * credit
    total_credit += credit
score_average = total_score // total_credit
if score_average >= 60:
    stdout.write(f'Oh wow! You pass it!\n{score_average}\n')
else: stdout.write('YEEEEEE!!!\n')
