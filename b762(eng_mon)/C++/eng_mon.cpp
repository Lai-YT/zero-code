#include <iostream>

int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  int num_of_reports;
  while (std::cin >> num_of_reports) {
    std::string report;
    int num_of_dies = 0, num_of_kills = 0, num_of_assists = 0, conti_kills = 0;
    while (num_of_reports--) {
      std::cin >> report;
      if (report[0] == 'D') {
        num_of_dies++;
        std::cout << (conti_kills < 3? "You have been slained.": "SHUTDOWN.") << '\n';
        conti_kills = 0;
      }
      else if (report[4] == 'A') num_of_assists++;
      else {
        num_of_kills++;
        if (++conti_kills < 3) {
          std::cout << "You have slain an enemie." << '\n';
          continue;
        }
        switch (conti_kills) {
          case 3: std::cout << "KILLING SPREE!" << '\n'; break;
          case 4: std::cout << "RAMPAGE~" << '\n'; break;
          case 5: std::cout << "UNSTOPPABLE!" << '\n'; break;
          case 6: std::cout << "DOMINATING!" << '\n'; break;
          case 7: std::cout << "GUALIKE!" << '\n'; break;
          default: std::cout << "LEGENDARY!" << '\n'; break;
        }
      }
    }
    std::cout << num_of_kills  << '/' << num_of_dies << '/' << num_of_assists << '\n';
  }
  return 0;
}
