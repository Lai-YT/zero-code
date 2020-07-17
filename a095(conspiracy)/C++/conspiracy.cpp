#include <iostream>

int main(void) {
  int prisoners, hats;
  while (std::cin >> prisoners >> hats) {
    if (prisoners > hats) std::cout << hats + 1 << '\n';
    else if (prisoners == hats) std::cout << hats << '\n';
    else break; 
  }

  return 0;
}
