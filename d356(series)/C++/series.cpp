#include <iostream>

int main(void) {
  int k;
  while (std::cin >> k) {
    double sum = 0, count = 0;
    while (k >= sum) {
      count++;
      sum += 1 / count;
    }
    std::cout << count << '\n';
  }
  return 0;
}
