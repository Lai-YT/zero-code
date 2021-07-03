#include <iostream>
#include <queue>


struct Path {
  Path(int x, int y, int step)
    :x(x)
    ,y(y)
    ,step(step)
  {}

  int x, y, step;
};


inline bool IsPath(const char block) {
  return (block == '.' ? true : false);
}


int main(int argc, char const *argv[]) {
  int n = 0;
  while (std::cin >> n) {
    bool maze[n][n];
    char block = ' ';
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        std::cin >> block;
        maze[i][j] = IsPath(block);
      }
    }
    // path check in thr order of up -> right -> down -> left
    int directions[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
    // this is for solution detecting
    bool exist_path = false;
    // data structure to do Breath-first search
    std::queue<Path> q;
    // From maze[1][1] to maze[n - 2][n - 2].
    // Run out of range won't happen since there's always the '#' boundary.
    // The maze path will be flip to '#'(false) after passing.
    q.emplace(1, 1, 1);
    while (!q.empty()) {
      const auto cur_path = q.front();
      q.pop();
      // If we reach the destination, search is over.
      if (cur_path.x == n - 2 && cur_path.y == n - 2) {
        std::cout << cur_path.step << '\n';
        exist_path = true;
        break;
      }

      // try 4 directions
      for (int i = 0; i < 4; ++i) {
        int cur_x = cur_path.x + directions[i][0],
            cur_y = cur_path.y + directions[i][1];
        // If there's a path, reach it!
        if (maze[cur_x][cur_y]) {
          q.emplace(cur_x, cur_y, cur_path.step + 1);
          // mark out
          maze[cur_x][cur_xy] = false;
        }
      }
    }
    if (!exist_path) {
      std::cout << "No solution!" << '\n';
    }
  }
  return 0;
}
