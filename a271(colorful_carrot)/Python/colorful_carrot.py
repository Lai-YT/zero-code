from sys import stdin, stdout
from typing import Dict, List, Tuple


for line in stdin:
    for i in range(int(line)):
        x, y, z, w, n, m = map(int, stdin.readline().split())
        # index is used as the carrot number,
        # maps to the corresponding weight increament and poison
        change: Dict[str, Tuple[int, bool]] = {
            '0': (0, False), '1': (x, False), '2': (y, False),
            '3': (-z, False), '4': (-w, True)
        }
        # how many time the rabbit is poisoned
        poisons: int = 0
        for day in stdin.readline().split():
            m -= n * poisons
            if m <= 0:
                break

            # Not sure why much slower than the start-end section below.
            # Should've be more efficient since only query once.
            # Maybe the construction time is more costly than query.
            # cur_change: Tuple[int, bool] = change[day]
            # m += cur_change[0]
            # if cur_change[1]:
            #     poisons += 1

            # start
            m += change[day][0]
            if change[day][1]:
                poisons += 1
            # end

        stdout.write(
            f'{m}g\n' if m > 0 else 'bye~Rabbit\n'
        )
