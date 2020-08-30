#include <iostream>

bool is_ugly(int n) {
  while (n % 2 == 0) n /= 2;
  while (n % 3 == 0) n /= 3;
  while (n % 5 == 0) n /= 5;
  return n == 1;
}

int main(int argc, char const *argv[]) {
  int count = 6, n = 8;

  while (count != 1500) {
    if (is_ugly(n++)) count++;
  }
  std::cout << "The 1500'th ugly number is " << n - 1 << ".\n";
  return 0;
}
