#include <iostream>
#include <algorithm>

bool amount(int k, int m, int a, int n) {
  if (n > k) return false;
  for (int i = a; i >= 0; i--)
    if ((k - m * i) % n == 0) return true;
  return false;
}

int main(void) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  int test, k, m, n;
  while (std::cin >> test) {
    while (test--) {
      std::cin >> k >> m >> n;
      if (n > m) std::swap(n, m);
      if (n == 1) {
        std::cout << "good\n";
        continue;
      }
      for (int i = k; i >= 0; i--) {
        if (i == 0) std::cout << "good\n";
        else if (!amount(i, m, i / m, n)) {
          std::cout << i << '\n';
          break;
        }
      }
    }
  }
  return 0;
}
