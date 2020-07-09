#include <iostream>
#include <algorithm>

std::string to_binary(int decimal_number) {
  std::string binary_number = "";
  while(decimal_number != 0) {
    binary_number += std::to_string(decimal_number % 2);
    decimal_number /= 2;
  }
  reverse(binary_number.begin(), binary_number.end());
  return binary_number;
}

int main(void) {
  int decimal_number;
  while(std::cin >> decimal_number) {
    std::cout << to_binary(decimal_number) << '\n';
  }
  return 0;
}
