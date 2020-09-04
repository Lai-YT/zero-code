#include <iostream>

int main(int argc, char const *argv[]) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  int n, m;
  while (std::cin >> n >> m) {
    std::cout << (n - 1) + n * (m - 1) << '\n';
  }
  return 0;
}
