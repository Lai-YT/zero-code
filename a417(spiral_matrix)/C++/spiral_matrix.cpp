#include <iostream>
#include <vector>
#include <iomanip>

std::vector<std::vector<int> > spiral_square_trace(int size) {
  // initial condition:
  int up = 0, right = size - 1, down = size - 1, left = 0;
  int x = 0, y = 0; // start from upper left
  // downward is positive x, rightward is positive y. For fitting the index of matrix
  int direction[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
  std::vector<std::vector<int> > trace;
  trace.reserve(size * size);
  int d = 0;
  for (int count = 0; count < size * size; count++) {
    std::vector<int> cor;
    cor.push_back(x);
    cor.push_back(y);
    trace.push_back(cor);
    int x_ = x + direction[d][0];
    int y_ = y + direction[d][1];
    if (x_ < up || x_ > down || y_ < left || y_ > right) {
      if (d == 0) up += 1;
      else if (d == 1) right -= 1;
      else if (d == 2) down -= 1;
      else left += 1;
      d = (d + 1) % 4;
      x_ = x + direction[d][0];
      y_ = y + direction[d][1];
    }
    x = x_;
    y = y_;
  }
  return trace;
}

int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  int num_of_cases;
  while (std::cin >> num_of_cases) {
    int n, m;
    for (int i = 0; i < num_of_cases; i++) {
      std::cin >> n >> m;
      int matrix[n][n] = {0};
      std::vector<std::vector<int> > trace = spiral_square_trace(n);
      for (int j = 0, number = 1; j < n * n; j++, number++)
        matrix[trace[j][0]][trace[j][1]] = number;
      if (m == 1) {
        for (int j = 0; j < n; j++) {
          for (int k = 0; k < n; k++)
            std::cout << std::setw(5) << matrix[j][k];
          std::cout << '\n';
        }
      } else {
        for (int j = 0; j < n; j++) {
          for (int k = 0; k < n; k++)
            std::cout << std::setw(5) << matrix[k][j];
          std::cout << '\n';
        }
      }
    }
  }
  return 0;
}
