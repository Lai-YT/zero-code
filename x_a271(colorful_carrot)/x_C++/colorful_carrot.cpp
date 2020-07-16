#include <iostream>
#include <sstream>


int main(void) {
  int num_of_cases;
  while (std::cin >> num_of_cases) {
    int cases[num_of_cases] = {0};
    std::stringstream settings;
    for (int i = 0; i < num_of_cases; i++) {
      settings.clear();
      settings.str("");
      std::string line;
      int x, y, z, w, n, m;
      // std::getline(std::cin, line);
      std::cin >> x >> y >> z >> w >> n >> m;
      std::cout << x << y << z << w << n << m << '\n';
      // settings << line;
      std::getline(std::cin, line);
      // std::cout << line << '\n';

      settings << line;

      int day;
      int state = 0;
      while (settings >> day){
        if (state) {
          m -= n * state;
        }
        if (m <= 0) {
          break;
        }
        switch (day) {
          case 1: m += x; break;
          case 2: m += y; break;
          case 3: m -= z; break;
          case 4:
            m -= w;
            state +=1;
            break;
          case 0: break;
        }
      }
      std::cout << m << '\n';
      cases[i] = m;
    }
    for (int i = 0; i < num_of_cases; i++) {
      if (cases[i] > 0) {
        printf("%dg\n", cases[i]);
        // std::cout << cases[i] << "g" << '\n';
      } else {
        printf("bye~Rabbit\n");
        // std::cout << "bye~Rabbit" << '\n';
      }
    }
  }


  return 0;
}
