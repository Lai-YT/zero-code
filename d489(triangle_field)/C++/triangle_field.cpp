#include <iostream>

int main(int argc, char const *argv[]) {
  int a, b, c;
  while (std::cin >> a >> b >> c) {
    double delta = (a + b + c) / 2;
    double price = delta * (delta - a) * (delta - b) * (delta - c);
    std::cout << (int)price << '\n';
  }
  return 0;
}
