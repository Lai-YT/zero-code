#include <iostream>

int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  int num_of_penguins;
  while (std::cin >> num_of_penguins) {
    int num;
    for (int i = 1; i <= num_of_penguins; i++) {
      std::cin >> num;
      std::cout << i << ' ';
    }
    std::cout << '\n';
  }
  return 0;
}
