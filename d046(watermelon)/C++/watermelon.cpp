#include <iostream>

int main(int argc, char const *argv[]) {
  int num_of_watermelon;
  while (std::cin >> num_of_watermelon) {
    int num_of_move = 0;
    int weight_of_watermelon;
    for (int i = 0; i < num_of_watermelon; i++) {
      std::cin >> weight_of_watermelon;
      if (weight_of_watermelon <= 10) num_of_move++;
    }
    std::cout << num_of_move << '\n';
  }
  return 0;
}
