#include <iostream>

int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  int size;
  while (std::cin >> size) {
    int graph[size][size / 2], number[2];
    for (int row = 0; row < size; row++) {
      for (int col = 0; col < size / 2; col++) {
        std::cin >> number[0] >> number[1];
        graph[row][col] = (number[0] > number[1] ? number[0] : number[1]);
      }
    }
    int result[size / 2][size / 2];
    for (int row = 0; row < size; row += 2) {
      for (int col = 0; col < size / 2; col++) {
        result[row / 2][col] = (graph[row][col] > graph[row+1][col] ? graph[row][col] : graph[row+1][col]);
        std::cout << result[row / 2][col] << ' ';
      }
      std::cout << '\n';
    }
  }
  return 0;
}
