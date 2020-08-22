from sys import stdin, stdout
while True:
    line = stdin.readline()
    if not line: break
    candies, weedles = map(int, line.split())
    total_evolution = 0
    while weedles > 0:
        evolution = min(candies // 12, weedles)
        total_evolution += evolution
        candies -= evolution * 10
        weedles -= evolution
        if candies < 12:
            weedles -= 12 - candies
            candies = 12
    stdout.write(f'{total_evolution}\n')
