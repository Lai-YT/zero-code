from sys import stdin, stdout

names = set()
for name in stdin:
    msg = 0
    # NOTE: if we directly store the str as key, the memory usage will exceed the limit,
    # which causes memory error.
    # 0 - 9 & a - z, 36 characters in total (upper & lower cases are treated as the same)
    name_hash = int(name, 36)
    if name_hash in names:
        msg = 1
    stdout.write(f'{msg}\n')
    names.add(name_hash)
