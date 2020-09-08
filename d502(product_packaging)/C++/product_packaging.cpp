#include <iostream>
#include <cmath>

int main(void) {
  int one, two, three, four;
  while (std::cin >> one >> two >> three >> four) {
    int package = four + three + two / 8;
    two %= 8;
    if (one > three * 37) one -= three * 37;
    else one = 0;
    if (two) {
      package += 1;
      one -= 64 - 8 * two;
    }
    if (one) package += ceil(one / 64);
    std::cout << package << '\n';
  }
  return 0;
}
