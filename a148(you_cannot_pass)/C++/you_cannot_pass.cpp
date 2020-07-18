#include <iostream>

int main(int argc, char const *argv[]) {
  int num_of_scores;
  while (std::cin >> num_of_scores) {
    double sum = 0;
    for (int i = 0; i < num_of_scores; i++) {
      double score;
      std::cin >> score;
      sum += score;
    }
    if (sum / num_of_scores > 59) {
      std::cout << "no" << '\n';
    } else {
      std::cout << "yes" << '\n';
    }
  }

  return 0;
}
