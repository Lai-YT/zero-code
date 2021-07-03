from collections import deque
from sys import stdin, stdout
from typing import List


class Path:
    def __init__(self, x: int, y: int, step: int) -> None:
        self.x: int = x
        self.y: int = y
        self.step: int = step


if __name__ == '__main__':
    while True:
        line: str = stdin.readline()
        if not line:
            break

        n: int = int(line)
        maze: List[List[bool]] = [([False] * n) for _ in range(n)]
        for i in range(n):
            blocks: str = stdin.readline()
            for j, block in enumerate(blocks):
                if block == '.':
                    maze[i][j] = True

        directions: List[List[int]] = [[-1, 0], [0, 1], [1, 0], [0, -1]]
        exist_path: bool = False

        q = deque()
        q.append(Path(1, 1, 1))
        while len(q):
            cur_path: Path = q.popleft()
            if cur_path.x == n - 2 and cur_path.y == n - 2:
                stdout.write(f'{cur_path.step}\n')
                exist_path = True
                break

            for x, y in directions:
                cur_x: int = cur_path.x + x
                cur_y: int = cur_path.y + y

                if maze[cur_x][cur_y]:
                    q.append(Path(cur_x, cur_y, cur_path.step + 1))
                    maze[cur_x][cur_y] = False

        if not exist_path:
                stdout.write('No solution!\n')
