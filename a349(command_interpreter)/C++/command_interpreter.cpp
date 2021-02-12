#include <iostream>
#include <cstdio>

int main() {
  int memory[8] = {0},
      buffer[8] = {0};
  for (int i = 0; i < 8; i++) {
    std::cin >> memory[i];
  }
  int num_of_command;
  std::cin >> num_of_command;
  for (int i = 0; i < num_of_command; i++) {
    std::string com;
    std::cin >> com;
    switch (com[0]) {
      case'L': {
        int rd, ms;
        std::cin >> rd >> ms;
        buffer[rd] = memory[ms];
        break;
      }
      case 'S': {
        int md, rs;
        std::cin >> md >> rs;
        memory[md] = buffer[rs];
        break;
      }
      case 'A': {
        int rd, rs1, rs2;
        std::cin >> rd >> rs1 >> rs2;
        buffer[rd] = buffer[rs1] + buffer[rs2];
        break;
      }
      case 'M': {
        int rd, rs;
        std::cin >> rd >> rs;
        buffer[rd] = buffer[rs];
        break;
      }
    }
  }
  std::cout << buffer[0] << '\n'
            << memory[0] << '\n';

  return 0;
}
