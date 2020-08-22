#include <iostream>

#define min(x, y) x < y ? x : y

int main(int argc, char const *argv[]) {
  int candies, weedles, evolution, total_evolution;
  while (std::cin >> candies >> weedles) {
    total_evolution = 0;
    while (weedles > 0) {
      evolution = min(candies / 12, weedles);
      candies -= evolution * 10;
      weedles -= evolution;
      total_evolution += evolution;
      if (candies < 12) {
        weedles -= 12 - candies;
        candies = 12;
      } 
    }
    std::cout << total_evolution << '\n';
  }
  return 0;
}
