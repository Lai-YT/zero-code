#include <iostream>

int main(int argc, char const *argv[]) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  int amount;
  while (std::cin >> amount) {
    std::cout << amount - amount % 2 << '\n';
  }
  return 0;
}
