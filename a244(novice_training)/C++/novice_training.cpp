#include <iostream>

int main(void) {
  int num_of_cases;
  while(std::cin >> num_of_cases) {
    long long int cases[num_of_cases] = {0};
    for(int i = 0; i < num_of_cases; i++) {
      long long int a, b, c;
      std::cin >> a >> b >> c;
      switch (a) {
        case 1: cases[i] = b + c; break;
        case 2: cases[i] = b - c; break;
        case 3: cases[i] = b * c; break;
        case 4: cases[i] = b / c; break;
      }
    }
    for(int i = 0; i < num_of_cases; i++) {
      std::cout << cases[i] << '\n';
    }
  }

  return 0;
}
