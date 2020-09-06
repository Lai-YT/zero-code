from sys import stdin, stdout
while True:
    line = stdin.readline()
    if not line: break
    a, b, c = map(int, line.split())
    vote = [[a, 'A'], [b, 'B'], [c, 'C']]
    vote.sort(key = lambda x: x[0])
    vote[1][0] = vote[0][0] + vote[1][0]
    vote.sort(key = lambda x: x[0])
    stdout.write(vote[2][1] + '\n')
