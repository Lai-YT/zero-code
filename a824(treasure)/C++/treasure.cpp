#include <iostream>
#include <algorithm>

int func(int n, int ceil) {
  if (n > ceil) return 0;
  int h = ceil / n;
  return (n + n * h) * h * 0.5;
}

char alphabet[27] = {'0', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', \
            'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int main(void) {
  int a, b, c, n;
  while (std::cin >> a >> b >> c) {
    n = func(a, c) + func(b, c) - func(a * b / std::__gcd(a, b), c);
    if (n > 26) n %= 26;
    std::cout << alphabet[n] << '\n';
  }
  return 0;
}
