#include <iostream>

int main(void) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);

  int num_of_cases;
  while (std::cin >> num_of_cases) {
    int cases[num_of_cases] = {0};
    for (int i = 0; i < num_of_cases; i++) {
      std::string day;
      int x, y, z, w, n, m;
      std::cin >> x >> y >> z >> w >> n >> m;
      std::cin.ignore();
      std::getline(std::cin, day);
      int length = day.length();
      int j = 0;
      int state = 0;
      while (j < length){
        if (state) {
          m -= n * state;
        }
        if (m <= 0) {
          break;
        }
        switch (day[j]) {
          case '1': m += x; break;
          case '2': m += y; break;
          case '3': m -= z; break;
          case '4':
            m -= w;
            state +=1;
            break;
          case '0': break;
        }
        j += 2;
      }
      cases[i] = m;
    }
    for (int i = 0; i < num_of_cases; i++) {
      if (cases[i] > 0) {
        std::cout << cases[i] << "g" << '\n';
      } else {
        std::cout << "bye~Rabbit" << '\n';
      }
    }
  }

  return 0;
}
