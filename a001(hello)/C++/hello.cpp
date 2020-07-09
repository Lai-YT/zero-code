#include <iostream>

int main(void) {
  std::string str = "";
  while(std::cin >> str) {
    std::cout << "hello, " + str << '\n';
  }
  return 0;
}
