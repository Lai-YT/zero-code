#include <iostream>

int main(int argc, char const *argv[]) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  int num_of_player, num_of_kill;
  while (std::cin >> num_of_player >> num_of_kill) {
    bool remain_players[num_of_player] = {false};
    int k;
    while (num_of_kill--) {
      std::cin >> k;
      if (k >= num_of_player || remain_players[k - 1]) {
        std::cout << "0u0 ...... ?\n";
        continue;
      }
      while (remain_players[k] && k < num_of_player) k++;
      if (k == num_of_player) {
        std::cout << "0u0 ...... ?\n";
        continue;
      }
      std::cout << k + 1 << '\n';
      remain_players[k] = true;
    }
  }
  return 0;
}
