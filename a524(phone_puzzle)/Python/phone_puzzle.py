from sys import stdin, stdout
from typing import List


num_of_digit: int or str = 0
password: List[int] = [0, 0, 0, 0, 0, 0, 0, 0]
# won't use index 0
unuse_digit: List[bool] = [True, True, True, True, True, True, True, True, True]


def try_next_password(prev_try: int, pos: int):
    password[pos] = prev_try
    unuse_digit[prev_try] = False

    if pos == num_of_digit - 1:
        for word in password[:num_of_digit]:
            stdout.write(str(word))
        stdout.write('\n')
        return

    for i in range(num_of_digit, 0, -1):
        if unuse_digit[i]:
            try_next_password(i, pos + 1)
            unuse_digit[i] = True
    return


while True:
    num_of_digit = stdin.readline().strip('\n')
    if not num_of_digit:
        break

    num_of_digit = int(num_of_digit)
    for i in range(num_of_digit, 0, -1):
        try_next_password(i, 0)
        # cancel the mark
        unuse_digit[i] = True
