from sys import stdin, stdout
while True:
    line = stdin.readline()
    if not line: break
    num_of_balls, num_of_commands, num_of_queries = map(int, line.split())
    balls = [b for b in range(num_of_balls)]
    for command in range(num_of_commands):
        pos, target, destination = stdin.readline().split()
        if target == destination: continue
        balls.remove(int(target))
        ball = balls.index(int(destination))
        if pos == 'F':
            balls.insert(0, int(target)) if ball + 1 >= len(balls) else balls.insert(ball + 1, int(target))
        else: balls.insert(balls.index(int(destination)), int(target))
    queries = list(map(int, stdin.readline().split()))
    for q in queries:
        ball = balls.index(q)
        left = balls[ball-1] if ball-1 >= 0 else balls[num_of_balls-1]
        right = balls[ball+1] if ball + 1 < num_of_balls else balls[0]
        stdout.write(f'{left} {right} ')
    stdout.write('\n')
