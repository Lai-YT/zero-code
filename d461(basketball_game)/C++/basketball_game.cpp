#include <iostream>

int main(int argc, char const *argv[]) {
  int num_of_classes;
  while (std::cin >> num_of_classes) {
    std::cout << num_of_classes - 1 << '\n';
  }
  return 0;
}
