#include <iostream>

int main(int argc, char const *argv[]) {
  int times;
  while (std::cin >> times) {
    for (int i = 1; i <= times; i++) {
      std::cout << i << ". I don\'t say swear words!\n";
    }
  }
  return 0;
}
