#include <iostream>
#include <cmath>

int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  int total, remove;
  while (std::cin >> total >> remove) {
    if (remove < total / 2) remove = total - remove;
    if (remove == total) {
      std::cout << 1 << '\n';
      continue;
    }
    double digits = 0;
    for (int n = remove + 1; n <= total; n++) digits += log10(n);
    for (int n = 1; n <= total - remove; n++) digits -= log10(n);
    std::cout << ceil(digits) << '\n';
  }
  return 0;
}
