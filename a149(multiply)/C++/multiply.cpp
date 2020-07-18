#include <iostream>

int main(int argc, char const *argv[]) {
  int num_of_cases;
  while (std::cin >> num_of_cases) {
    int answers[num_of_cases] = {0};
    for (int i = 0; i < num_of_cases; i++) {
      int product = 1;
      std::string s;
      std::cin >> s;
      for (char n: s) {
        product *= (int)n - 48;
      }
      answers[i] = product;
    }
    for (int product: answers) {
      std::cout << product << '\n';
    }
  }

  return 0;
}
