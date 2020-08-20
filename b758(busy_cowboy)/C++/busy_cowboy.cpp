#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[]) {
  int hour, min;
  while (std::cin >> hour >> min) {
    min += 30;
    hour += 2 + min / 60;
    std::cout << std::setw(2) << std::setfill('0') << hour % 24
              << ':' << std::setw(2) << std::setfill('0') << min % 60 << '\n';
  }
  return 0;
}
