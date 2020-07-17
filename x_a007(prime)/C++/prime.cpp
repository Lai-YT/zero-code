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
  int number = 0;
  while(scanf("%d", &number) != EOF) {
    if(is_prime(number)) {
      printf("質數\n");
    } else {
      printf("非質數\n");
    }
  }

  return 0;
}
