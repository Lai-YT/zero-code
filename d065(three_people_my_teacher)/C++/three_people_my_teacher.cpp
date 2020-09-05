#include <iostream>
#define max(a, b) (a > b ? a : b)

int main(void) {
  int a, b, c;
  while (std::cin >> a >> b >> c) {
    std::cout << max(max(a, b), c) << '\n';
  }
  return 0;
}
