
a, b, c = map(int, input().split())
discriminant = b**2 - 4*a*c
if discriminant < 0:
    print("No real root")
else:
    roots = [0, 0]
    roots[0] = int(((-b) + discriminant**0.5) / (2*a))
    roots[1] = int(((-b) - discriminant**0.5) / (2*a))
    if roots[1] == roots[0]:
        print("Two same roots x=", roots[0], sep = "", end = "\n")
    else:
        if roots[1] > roots[0]:
            roots[0], roots[1] = roots[1], roots[0]
        print("Two different roots x1=", roots[0], " , x2=", roots[1], sep = "", end = "\n")
