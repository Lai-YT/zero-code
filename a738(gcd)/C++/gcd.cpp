#include <iostream>

int gcd(int a, int b) {
  int temp;
  while (b) {
    temp = a;
    a = b;
    b = temp % b;
  }
  return a;
}

int main(int argc, char const *argv[]) {
  int a, b;
  while (std::cin >> a >> b) {
    std::cout << gcd(a, b) << '\n';
  }
  return 0;
}
