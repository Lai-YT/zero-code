#include <iostream>

int main(int argc, char const *argv[]) {
  int num_of_class;
  while (std::cin >> num_of_class) {
    int c, max = 0;
    for (int i = 0; i < num_of_class; ++i) {
      std::cin >> c;
      if (c > max) max = c;
    }
    std::cout << max << '\n';
  }
  return 0;
}
