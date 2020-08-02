#include <iostream>

int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  int num_of_carriages;
  while (std::cin >> num_of_carriages) {
    int carriages[num_of_carriages];
    for (int i = 0; i < num_of_carriages; i++) {
      std::cin >> carriages[i];
    }
    int swaps = 0;
    for (int i = 0; i < num_of_carriages - 1; i++) {
      for (int j = 0; j < num_of_carriages - i - 1; j++) {
        if (carriages[j] > carriages[j+1]) {
          std::swap(carriages[j], carriages[j+1]);
          swaps++;
        }
      }
    }
    std::cout << swaps << '\n';
  }
  return 0;
}
