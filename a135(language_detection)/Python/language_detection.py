from sys import stdin, stdout


HELLO_OF_COUNTRIES = {
    'HELLO': 'ENGLISH',
    'HOLA': 'SPANISH',
    'HALLO': 'GERMAN',
    'BONJOUR': 'FRENCH',
    'CIAO': 'ITALIAN',
    'ZDRAVSTVUJTE': 'RUSSIAN',
}


for i, line in enumerate(stdin):
    line = line.strip()
    if line == '#':
        break
        
    stdout.write(f"Case {i+1}: {HELLO_OF_COUNTRIES.get(line, 'UNKNOWN')}\n")
