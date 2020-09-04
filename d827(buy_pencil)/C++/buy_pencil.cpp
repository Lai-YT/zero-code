#include <iostream>

int main(void) {
  int amount;
  while (std::cin >> amount) {
    std::cout << (amount / 12) * 50 + (amount % 12) * 5 << '\n';
  }
  return 0;
}
