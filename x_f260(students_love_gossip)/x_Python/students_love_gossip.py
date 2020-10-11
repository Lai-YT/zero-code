from sys import stdin, stdout

class Group():
    def __init__(self, num, rel = set()):
        self.number = num
        self.relate = rel

    def add_member(self, new_member):
        self.relate.add(new_member)

    def __str__(self):
        return str(self.number) + ' ' + str(self.relate)


def union(g1: Group, g2: Group, new_num: int) -> Group:
    return Group(num = new_num, rel = g2.relate.union(g1.relate))



while True:
    line = stdin.readline()
