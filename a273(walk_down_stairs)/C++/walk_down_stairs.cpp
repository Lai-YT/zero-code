#include <iostream>

int main(void) {
  int now, jump;
  while (std::cin >> now >> jump) {
    if (!now && !jump) std::cout << "Ok!\n";
    else if (!jump || now % jump) std::cout << "Impossib1e!\n";
    else std::cout << "Ok!\n";
  }
  return 0;
}
