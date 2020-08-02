#include <iostream>

int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  int num_of_cases;
  while (std::cin >> num_of_cases) {
    int length, width;
    for (int c = 0; c < num_of_cases; c++) {
      std::cin >> length >> width;
      int new_len = length * width;
      int graph[new_len];
      for (int i = 0; i < new_len; i++) std::cin >> graph[i];
      bool change = false;
      for (int i = 0; i < new_len; i++) {
        if (graph[i] != graph[new_len-i-1]) {
          change = true;
          break;
        }
      }
      if (change) std::cout << "keep defending" << '\n';
      else std::cout << "go forward" << '\n';
    }
  }
  return 0;
}
