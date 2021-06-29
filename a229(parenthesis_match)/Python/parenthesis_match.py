from sys import stdin, stdout
from typing import List


# try to speed up by using glbal variables
num_of_pair: str or int = 0
parenthesis: List[str] = list([''] * 26)


def next_prarenthesis(used_left: int, used_right: int, pos: int) -> None:
    if used_left > num_of_pair or used_right > used_left:
        return
    if pos == (num_of_pair << 1):
        stdout.write(f"{''.join(parenthesis[:num_of_pair << 1])}\n")
        return

    parenthesis[pos] = '('
    next_prarenthesis(used_left + 1, used_right, pos + 1)
    parenthesis[pos] = ')'
    next_prarenthesis(used_left, used_right + 1, pos + 1)

    return


if __name__ == '__main__':
    while True:
        num_of_pair = stdin.readline()
        if not num_of_pair:
            break
        num_of_pair = int(num_of_pair)
        next_prarenthesis(0, 0, 0)
        print()
