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
  return number != 1; // 1 is not a prime number
}


int main(void) {
  int start, end;
  while (std::cin >> start >> end) {
    int count = 0;
    // start with 1 and 2 need to be handled
    if (start == 2 || (start == 1 && end != 1) ) {
      count = 1;
      for (int i = 3; i <= end; i += 2) {
        if (is_prime(i)) count++;
      }
    } else if (start % 2 == 0) {
      for (int i = start + 1; i <= end; i += 2) {
        if (is_prime(i)) count++;
      }
    } else {
      for (int i = start; i <= end; i += 2) {
        if (is_prime(i)) count++;
      }
    }
    std::cout << count << '\n';
  }

  return 0;
}
