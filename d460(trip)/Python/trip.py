from sys import stdin, stdout

while True:
    age = stdin.readline()
    if not age: break
    age = int(age)
    price = (6 <= age <= 11) * 590 \
            + (12 <= age <= 17) * 790 \
            + (18 <= age <= 59) * 890 \
            + (age >= 60) * 399
    stdout.write(str(price) + '\n')
