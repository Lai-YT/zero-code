#include <iostream>

int gcd(int a, int b) {
  if(b) {
    return gcd(b, a % b);
  }
  return a;
}


int main(void) {
  int a, b;
  while (std::cin >> a >> b) {
    std::cout << (gcd(a, b)) << '\n';
  }

  return 0;
}
