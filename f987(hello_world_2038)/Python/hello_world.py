import time


def main() -> None:
    t = int(time.time()) % 10

    if t == 0 or t == 1:
        print('Hello, World!')
    elif t == 2 or t == 3:
        print('hello, world')
    elif t == 4 or t == 5:
        print('Halo, word!!!')
    elif t == 6 or t == 7:
        print('世界，您好！')
    elif t == 8 or t == 9:
        print('https://zerojudge.tw/ShowProblem?problemid=a001')
    else:
        print(t, 'Try again.')


if __name__ == '__main__':
    main()
    time.sleep(2)
