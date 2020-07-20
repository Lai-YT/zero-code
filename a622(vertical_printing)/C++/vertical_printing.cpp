#include <iostream>

int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);

  std::string team;
  while (std::getline(std::cin, team)) {
    std::string teams[16] = {""};
    int max_len = 0;
    int i = 0;
    while (team != "END") {
      teams[i] = team;
      if (team.length() > max_len) max_len = team.length();
      std::getline(std::cin, team);
      i++;
    }
    for (int j = 0; j < max_len; j++) {
      for (int k = 0; k < i; k++) {
        if (j < teams[k].length()) std::cout << teams[k][j] << "  ";
        else std::cout << "   ";
      }
      std::cout << '\n';
    }
  }

  return 0;
}
