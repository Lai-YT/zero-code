#include <iostream>
#include <cmath>


int main(void) {
  int num_of_cases;
  while(std::cin >> num_of_cases) {
    int c[num_of_cases] = {0};
    for(int i = 0; i < num_of_cases; i++) {
      int lower_limit, upper_limit, sum = 0;
      std::cin >> lower_limit >> upper_limit;
      for(int number = lower_limit; number <= upper_limit; number++) {
        if (pow((int)sqrt(number), 2) == number) {
          sum += number;
        }
      }
      c[i] = sum;
    }
    for(int i = 0; i < num_of_cases; i++) {
      std::cout << "Case " << i+1 << ": " << c[i] << '\n';
    }
  }

  return 0;
}
