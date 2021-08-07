from sys import stdin, stdout


case = int(stdin.readline())
for c in range(1, case + 1):
    money, person = map(int, stdin.readline().split(' '))

    distribution: int = money // person
    remain: int = money % person

    stdout.write(f'Case {c} :\n')
    # the last person gets the extra remain,
    # others have only the distribution
    for i in range(1, person):
        stdout.write(f'第{i}位 : 拿{distribution}元並說DD! BAD!\n')
    stdout.write(f'第{person}位 : 拿{distribution + remain}元並說DD! BAD!\n')
