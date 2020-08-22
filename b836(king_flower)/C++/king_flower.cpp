#include <iostream>
#include <cmath>

#define Go std::cout << "Go Kevin!!" << '\n'
#define No std::cout << "No Stop!!" << '\n'

int main(int argc, char const *argv[]) {
  long long n, m;
  while (std::cin >> n >> m) {
    if (m == 0) Go;
    else if ((n - 1) % m != 0) No;
    else {
      double times = ((m - 2) + sqrt((m - 2) * (m - 2) + 8 * m * n)) / (2 * m);
      if ((int)times == times) Go;
      else No;
    }
  }
  return 0;
}
