#include <iostream>

bool is_ugly(long long n) {
  while (n % 2 == 0) n /= 2;
  while (n % 3 == 0) n /= 3;
  while (n % 5 == 0) n /= 5;
  return n == 1;
}

int main(int argc, char const *argv[]) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  int cases, place;
  while (std::cin >> cases) {
    while (cases--) {
      std::cin >> place;
      int count = 0;
      long long n = 1;
      while (count != place) {
        if (is_ugly(n++)) count++;
      }
      std::cout << --n << '\n';
    }
  }
  return 0;
}
