
while True:
    try:
        number = int(input())
        prime = []
        while number != 1:
            if number % 2 == 0:
                prime.append(2)
                number //= 2
                continue
            for i in range(3, number + 1, 2):
                if number % i == 0:
                    prime.append(i)
                    number //= i
                    break
        p, c, i = [], [], 0
        while i < len(prime):
            p.append(prime[i])
            c.append(prime.count(prime[i]))
            i += prime.count(prime[i])
        for i in range(len(p) - 1):
            if c[i] != 1:
                print(f'{p[i]}^{c[i]} *', end = ' ')
            else:
                print(f'{p[i]} *', end = ' ')
        if c[len(p) - 1] != 1:
            print(f'{p[len(p) - 1]}^{c[len(p) - 1]}')
        else:
            print(f'{p[len(p) - 1]}')
    except:
        break
