#include <iostream>
#include <cmath>

bool is_prime(int number) {
  if(number == 2 || number == 3) {
    return true;
  } else if(number % 6 != 1 && number % 6 != 5) {
      return false;
  } else {
    int ceil = sqrt(number);
    for(int i = 5; i <= ceil; i += 6) {
      if(number % i == 0 || number % (i+2) == 0) {
        return false;
      }
    }
  }
  return number != 1;
}

int main(int argc, char const *argv[]) {
  int number;
  while (std::cin >> number) {
    if (is_prime(number)) {
      std::cout << number << '\n';
      continue;
    }
    for (int n = 2; n < (int)sqrt(number) + 1; n++) {
      if (number % n == 0 && is_prime(n)) {
        std::cout << number / n << '\n';
        break;
      }
    }
  }
  return 0;
}
