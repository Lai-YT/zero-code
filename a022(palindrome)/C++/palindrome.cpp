#include <iostream>
#include <algorithm>

bool palindrome(const std::string input_string) {
  std::string input_reverse = input_string;
  std::reverse(input_reverse.begin(), input_reverse.end());
  for(int i = 0; i < input_string.size(); i++) {
    if(input_string[i] != input_reverse[i]) {
      return false;
    }
  }
  return true;
}

int main(void) {
  std::string input_string;
  while (std::cin >> input_string) {
    if(palindrome(input_string)) {
      std::cout << "yes" << '\n';
    } else {
      std::cout << "no" << '\n';
    }
  }
  return 0;
}
