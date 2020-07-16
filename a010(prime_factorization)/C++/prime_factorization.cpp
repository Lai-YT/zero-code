#include <iostream>
#include <cmath>

int main(void) {
  int number;
  while (std::cin >> number) {
    int count = 0;
    if (number % 2 == 0) {
      while (number % 2 == 0) {
        number /= 2;
        count++;
      }
      if (count != 1) std::cout << "2^" << count;
      else std::cout << "2";
      if (number != 1) std::cout << " * ";
      count = 0;
    }
    for (int i = 3; i < number + 1; i += 2) {
      if ((number % i) == 0) {
        while (number % i == 0) {
          number /= i;
          count++;
        }
        if (count != 1) std::cout << i << "^" << count;
        else std::cout << i;
        if (number != 1) std::cout << " * ";
        count = 0;
      }
    }
    std::cout << '\n';
  }

  return 0;
}
