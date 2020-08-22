#include <iostream>

inline int mmi(int a, int m) {
  int n = 1;
  while (true) {
    if ((a * n) % m == 1) return n;
    n++;
  }
}

int main(int argc, char const *argv[]) {
  int count[3], remain[3];
  while (std::cin >> count[0] >> remain[0]) {
    int m = count[0];
    for (int i = 1; i < 3; i++) {
      std::cin >> count[i] >> remain[i];
      m *= count[i];
    }
    long M = 0, y = 0, result = 0;
    for (int i = 0; i < 3; i++) {
      M = m / count[i];
      y = mmi(M % count[i], count[i]);
      result += remain[i] * M * y;
    }
    std::cout << result % m << '\n';
  }
  return 0;
}
