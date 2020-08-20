from sys import stdin, stdout
while True:
    num_of_reports = stdin.readline().strip('\n')
    if not num_of_reports: break
    num_of_reports = int(num_of_reports)
    num_of_kills, num_of_dies, num_of_assists, conti_kills = 0, 0, 0, 0
    while num_of_reports:
        report = stdin.readline()
        if report[0] == 'D':
            num_of_dies += 1
            if conti_kills < 3: stdout.write('You have been slained.\n')
            else: stdout.write('SHUTDOWN.\n')
            conti_kills = 0
        elif report[4] == 'A': num_of_assists += 1
        else:
            num_of_kills += 1
            conti_kills += 1
            if conti_kills < 3: stdout.write('You have slain an enemie.\n')
            elif conti_kills == 3: stdout.write('KILLING SPREE!\n')
            elif conti_kills == 4: stdout.write('RAMPAGE~\n')
            elif conti_kills == 5: stdout.write('UNSTOPPABLE!\n')
            elif conti_kills == 6: stdout.write('DOMINATING!\n')
            elif conti_kills == 7: stdout.write('GUALIKE!\n')
            else: stdout.write('LEGENDARY!\n')
        num_of_reports -= 1
    stdout.write(f'{num_of_kills}/{num_of_dies}/{num_of_assists}\n')
