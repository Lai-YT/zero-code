#include <iostream>

int main(void) {
  int n;
  while (std::cin >> n) {
    int sum = 1;
    for(int i = 1; i <= n; i++) {
      sum += 1 + i * (i - 1) / 2;
    }
    std::cout << sum << '\n';
  }

  return 0;
}
