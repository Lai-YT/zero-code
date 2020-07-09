#include <iostream>

int main(void) {
  std::string number;
  while(std::cin >> number) {
    int zero_position = number.size();
    for(int i = number.size()-1; i >= 0; i--) {
      std::string s(1, number.at(i));
      if(!s.compare("0")) {
        zero_position--;
      } else {
        break;
      }
    }
    std::string number_reversed = "";
    for(int i = zero_position-1; i >= 0; i--) {
      number_reversed += number[i];
    }

    if(number_reversed.empty()) {
      number_reversed = "0";
    }

    std::cout << number_reversed << '\n';
  }

  return 0;
}
