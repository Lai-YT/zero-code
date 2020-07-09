#include <iostream>

int main(void) {
  unsigned int month, date;
  std::cin >> month >> date;
  unsigned int s = (month*2 + date) % 3;
  switch (s) {
    case 0:
      std::cout << "普通" << '\n';
      break;
    case 1:
      std::cout << "吉" << '\n';
      break;
    case 2:
      std::cout << "大吉" << '\n';
      break;
  }
  return 0;
}
