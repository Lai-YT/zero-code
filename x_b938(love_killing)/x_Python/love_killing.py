from sys import stdin, stdout

while True:
    line = stdin.readline()
    if not line: break
    num_of_player, num_of_kill = map(int, line.split())
    i = 1
    remain_players = []
    while i <= num_of_player:
        remain_players += [False]
        i += 1
    kills = []
    try:
        r = ''
        while r != '\n':
            k = ''
            r = stdin.read(1)
            while r != ' ' and r != '\n':
                k = k + r
                r = stdin.read(1)
            kills += [int(k)]
    except: pass
    for kill in kills:
        if kill >= num_of_player or remain_players[kill - 1]:
            stdout.write('0u0 ...... ?\n')
            continue
        while kill < num_of_player and remain_players[kill]:
            kill += 1
        if kill == num_of_player:
            stdout.write('0u0 ...... ?\n')
            continue
        stdout.write(f'{kill + 1}\n')
        remain_players[kill] = True
