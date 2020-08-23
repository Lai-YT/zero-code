#include <iostream>

int main(int argc, char const *argv[]) {
  int num_of_cases, x, y, yee;
  while (std::cin >> num_of_cases) {
    while (num_of_cases--) {
      std::cin >> x >> y;
      yee = 100 - x - y;
      if (0 < yee && yee <= 30) std::cout << "sad!\n";
      else if (30 < yee && yee <= 60) std::cout << "hmm~~\n";
      else if (60 < yee && yee < 100) std::cout << "Happyyummy\n";
      else std::cout << "evil!!\n";
    }
  }
  return 0;
}
