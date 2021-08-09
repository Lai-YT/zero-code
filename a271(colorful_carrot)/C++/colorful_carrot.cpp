#include <iostream>
#include <string>


int main(void) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);

  int num_of_cases;
  while (std::cin >> num_of_cases) {
    while (num_of_cases--) {
      int x, y, z, w, n, m;
      std::cin >> x >> y >> z >> w >> n >> m;
      std::cin.ignore();
      std::string day;
      std::getline(std::cin, day);
      int length = day.length();
      int poisons = 0;
      /* +2 because a day follows by a space */
      for (int i = 0; i < length; i += 2) {
        m -= n * poisons;
        if (m <= 0) {
          break;
        }
        switch (day[i]) {
          case '1': m += x; break;
          case '2': m += y; break;
          case '3': m -= z; break;
          case '4':
            m -= w;
            poisons +=1;
            break;
          case '0': break;
          default:  break;
        }
      }
      std::cout << (m > 0 ? std::to_string(m) + "g" : "bye~Rabbit") << '\n';
    }
  }

  return 0;
}
