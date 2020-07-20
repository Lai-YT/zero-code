#include <iostream>

int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  int n;
  while (std::cin >> n) {
    n < 0 ? puts("-1") : n > 0 ? puts("1") : puts("0");
  }

  return 0;
}
