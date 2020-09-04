#include <iostream>

int main(int argc, char const *argv[]) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  int v, t;
  while (std::cin >> v >> t) {
    std::cout << 2 * v * t << '\n';
  }
  return 0;
}
