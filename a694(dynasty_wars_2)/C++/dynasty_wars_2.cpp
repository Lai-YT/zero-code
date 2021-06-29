#include <iostream>


int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  int n, m;
  while (std::cin >> n >> m) {
    int matrix[n + 1][n + 1] = {0};
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
        std::cin >> matrix[i][j];
        matrix[i][j] += matrix[i-1][j] + matrix[i][j-1] - matrix[i-1][j-1];
      }
    }
    for (int i = 0; i < m; i++) {
      int x1, y1, x2, y2;
      std::cin >> x1 >> y1 >> x2 >> y2;
      int total = matrix[x2][y2] - matrix[x1-1][y2] - matrix[x2][y1-1] + matrix[x1-1][y1-1];
      std::cout << total << '\n';
    }
  }
  return 0;
}
