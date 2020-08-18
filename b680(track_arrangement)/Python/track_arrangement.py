from sys import stdin, stdout
from functools import cmp_to_key

def arrange_team(runner_1, runner_2):
    return runner_1[1] - runner_2[1]

def is_even(n):
    if n % 2: return False
    return True

while True:
    num_of_runners = stdin.readline().strip('\n')
    if not num_of_runners: break
    num_of_runners = int(num_of_runners)
    runners = []
    for n in range(num_of_runners):
        runners.append(tuple(map(float, stdin.readline().split())))
    runners.sort(key = cmp_to_key(arrange_team))
    teams = [[] for i in range(num_of_runners // 8)]
    if num_of_runners % 8: teams.append([])
    num_of_teams = len(teams)
    for rank, runner in enumerate(runners):
        if is_even(rank // num_of_teams):
            teams[rank % num_of_teams].append(runner)
        else:
            teams[num_of_teams - 1 - rank % num_of_teams].append(runner)
    for team_num in range(num_of_teams - 1):
        stdout.write(f'{team_num+1} ')
        team = teams[team_num]
        stdout.write(f'{int(team[6][0])} {int(team[4][0])} {int(team[2][0])} {int(team[0][0])} {int(team[1][0])} {int(team[3][0])} {int(team[5][0])} {int(team[7][0])}\n')
    team = teams[num_of_teams-1]
    stdout.write(f'{num_of_teams} ')
    s = len(team)
    if s == 8:
        stdout.write(f'{int(team[6][0])} {int(team[4][0])} {int(team[2][0])} {int(team[0][0])} {int(team[1][0])} {int(team[3][0])} {int(team[5][0])} {int(team[7][0])}\n')
    elif s == 7:
        stdout.write(f'{int(team[6][0])} {int(team[4][0])} {int(team[2][0])} {int(team[0][0])} {int(team[1][0])} {int(team[3][0])} {int(team[5][0])}\n')
    elif s == 6:
        stdout.write(f'{int(team[4][0])} {int(team[2][0])} {int(team[0][0])} {int(team[1][0])} {int(team[3][0])} {int(team[5][0])}\n')
    elif s == 5:
        stdout.write(f'{int(team[4][0])} {int(team[2][0])} {int(team[0][0])} {int(team[1][0])} {int(team[3][0])}\n')
    elif s == 4:
        stdout.write(f'{int(team[2][0])} {int(team[0][0])} {int(team[1][0])} {int(team[3][0])}\n')
    elif s == 3:
        stdout.write(f'{int(team[2][0])} {int(team[0][0])} {int(team[1][0])}\n')
    elif s == 2:
        stdout.write(f'{int(team[0][0])} {int(team[1][0])}\n')
    else:
        stdout.write(f'{int(team[0][0])}\n')
