
a, b = input().split()
number_of_a = 0
number_of_b = 0

roman_dict = {"I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000}
for n in a:
    if n in roman_dict:
        number_of_a += roman_dict[n]

for n in b:
    if n in roman_dict:
        number_of_b += roman_dict[n]

print(f'a = {number_of_a}, b = {number_of_b}')
# if(a == "")
# different = abs(a - b)
