#include <iostream>
#include <iomanip>
#include <cmath>

int main(int argc, char const *argv[]) {
  double pa, pb, pc;
  while (std::cin >> pa >> pb >> pc) {
    std::cout << std::fixed << std::setprecision(2) << sqrt(pa * pa + pc * pc - pb * pb) << '\n';
  }
  return 0;
}
