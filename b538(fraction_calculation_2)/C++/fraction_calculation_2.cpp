#include <iostream>
#include <algorithm>

int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  int numerator_1, numerator_2, denominator_1, denominator_2, factor, new_numerator, new_denominator;
  char opr;
  while (std::cin >> numerator_1 >> denominator_1 >> numerator_2 >> denominator_2 >> opr) {
    factor = std::__gcd(denominator_1, denominator_2);
    switch (opr) {
      case '+':
        new_numerator = numerator_1 * (denominator_2 / factor) + numerator_2 * (denominator_1 / factor);
        new_denominator = (denominator_1 / factor) * denominator_2;
        break;
      case '-':
        new_numerator = numerator_1 * (denominator_2 / factor) - numerator_2 * (denominator_1 / factor);
        new_denominator = (denominator_1 / factor) * denominator_2;
        break;
      case '*':
        new_numerator = numerator_1 * numerator_2;
        new_denominator = denominator_1 * denominator_2;
        break;
      case '/':
        new_numerator = numerator_1 * denominator_2;
        new_denominator = denominator_1 * numerator_2;
        break;
    }
    if (new_numerator == 0) std::cout << 0 << '\n';
    else if (new_numerator == new_denominator) std::cout << 1 << '\n';
    else if (new_numerator + new_denominator == 0) std::cout << -1 << '\n';
    else {
      factor = std::__gcd(new_numerator, new_denominator);
      new_numerator /= factor;
      new_denominator /= factor;
      if (new_denominator < 0) {
        new_numerator *= -1;
        new_denominator *= -1;
      }
      if (new_denominator == 1) std::cout << new_numerator << '\n';
      else std::cout << new_numerator << '/' << new_denominator << '\n';
    }
  }
  return 0;
}
