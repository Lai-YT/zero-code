#include <iostream>
#include <string>


int main(int argc, char const *argv[]) {
  std::string str = "";
  while (std::cin >> str) {
    std::cout << "hello, " + str << '\n';
  }
  return 0;
}
