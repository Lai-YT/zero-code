#include <iostream>
#include <map>
#include <utility>

int main(void) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  std::map<std::string, char> code_table;
  code_table.insert(std::pair<std::string, char>("0 1 0 1", 'A'));
  code_table.insert(std::pair<std::string, char>("0 1 1 1", 'B'));
  code_table.insert(std::pair<std::string, char>("0 0 1 0", 'C'));
  code_table.insert(std::pair<std::string, char>("1 1 0 1", 'D'));
  code_table.insert(std::pair<std::string, char>("1 0 0 0", 'E'));
  code_table.insert(std::pair<std::string, char>("1 1 0 0", 'F'));
  std::string code;
  unsigned num_of_letters;
  while (std::cin >> num_of_letters) {
    std::cin.ignore();
    while (num_of_letters--) {
      std::getline(std::cin, code);
      std::cout << code_table[code];
    }
    std::cout << '\n';
  }

  return 0;
}
