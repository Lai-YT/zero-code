#include <iostream>

int main(int argc, char const *argv[]) {
  int num_of_teams;
  while (std::cin >> num_of_teams) {
    int ranks[num_of_teams];
    for (int &rank : ranks) {
      std::cin >> rank;
    }
    int count = 0;
    for (int const rank : ranks) {
      if (rank <= 25) count++;
      if (count == 5) break;
    }
    std::cout << count << '\n';
  }
  return 0;
}
