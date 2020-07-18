#include <iostream>

int main(int argc, char const *argv[]) {
  int ceil;
  while (std::cin >> ceil) {
    if (ceil == 0) break;
    for (int i = 1; i < ceil; i++) {
      if (i % 7 != 0) std::cout << i << ' ';
    }
    std::cout << '\n';
  }


  return 0;
}
