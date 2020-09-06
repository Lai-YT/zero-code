#include <iostream>

int main(void) {
  int hour, min;
  while (std::cin >> hour >> min) {
    if (hour >= 17 || hour < 7 || (hour < 8 && min < 30))
      std::cout << "Off School" << '\n';
    else std::cout << "At School" << '\n';
  }
  return 0;
}
