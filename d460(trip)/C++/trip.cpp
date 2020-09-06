#include <iostream>

int main(void) {
  int age, price;
  while (std::cin >> age) {
    price = (age >= 6 && age <= 11) * 590
    + (age >= 12 && age <= 17) * 790
    + (age >= 18 && age <= 59) * 890
    + (age >= 60) * 399;
    std::cout << price << '\n';
  }
  return 0;
}
