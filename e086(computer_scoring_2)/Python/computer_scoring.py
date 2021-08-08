from sys import stdin, stdout
from typing import Dict, List, Tuple


def calculate_score(correct_ans: str, ans: str) -> int:
    correct: int = 0
    for i in range(len(ans) if len(correct_ans) > len(ans) else len(correct_ans)):
        if (ans[i] == correct_ans[i]):
            correct += 1
    return correct * 100 // len(correct_ans)


for line in stdin:
    if not line.rstrip('\n'):
        break
    num_of_subs, num_of_stds = map(int, line.split())
    # sub_num : [sub_name, sub_ans]
    subs: Dict[int, Tuple[str, str]] = {}
    # sub_num(int) to sub_num(str) mapping, index is the int form (0 not used)
    sub_int_str: List[str] = [""] * (num_of_subs + 1)
    for s in range(1, num_of_subs + 1):
        sub_num, sub_name, ans = stdin.readline().split()
        sub_int_str[s] = sub_num
        subs[s] = (sub_name, ans)

    # std_num : std_name
    roster: Dict[int, str] = {}
    # std_num : (sub_num, score)
    std_score: Dict[int, List[Tuple[int, int]]] = {}
    for s in range(1, num_of_stds + 1):
        std_num, std_name = stdin.readline().split()
        roster[s] = std_name
        std_score[s] = []

    for _ in range(num_of_subs * num_of_stds):
        std_num, sub_num, ans = stdin.readline().split()
        correct_ans: str = subs[int(sub_num)][1]
        std_score[int(std_num)].append(
            (int(sub_num), calculate_score(correct_ans, ans))
        )

    for std in range(1, num_of_stds + 1):
        std_score[std].sort(key=lambda s: s[0])
        for sub in range(1, num_of_subs + 1):
            stdout.write(f'{std:03d},{roster[std]},{sub_int_str[sub]},{subs[sub][0]},{std_score[std][sub - 1][1]}\n')
