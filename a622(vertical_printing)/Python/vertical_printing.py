while True:
    try:
        teams = []
        team = input()
        max_len = len(team)
        while team != 'END':
            teams.append(team)
            if len(team) > max_len: max_len = len(team)
            team = input()
        for i in range(max_len):
            for team in teams:
                if i < len(team):
                    print(team[i], end = '  ')
                else: print(end = '   ')
            print()
    except:
        break
