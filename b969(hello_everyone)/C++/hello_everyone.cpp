#include <iostream>
#include <sstream>

int main(int argc, char const *argv[]) {
  std::string line, name, word;
  while (std::getline(std::cin, line)) {
    std::getline(std::cin, word);
    std::stringstream ss(line);
    while (ss >> name) {
      std::cout << word + ", " + name + '\n';
    }
  }
  return 0;
}
