#include <iostream>
#include <cmath>

int main(void) {

double half_time, ratio;
while(std::cin >> half_time >> ratio) {
  double time = -1 * half_time * log2(ratio);
  printf("%.3f\n", time);
}

  return 0;
}
