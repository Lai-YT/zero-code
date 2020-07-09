#include <iostream>
#include <cmath>

int main(void) {

  int n, m;
  while (std::cin >> n >> m) {
      if(n < 0 || n > m || m > 1000000) {
        break;
      }
      int count = 0;
      for(int number = n; number < m; number++) {
        int power = (std::to_string(number)).size();
        int total = 0;
        int temp = number; // avoid from changing number
        while(temp != 0) {
          total += pow((temp % 10), power);
          temp /= 10;
        }
        if(total == number) {
          count++;
          std::cout << number << ' ';
        }
      }
      if(count == 0) {
        std::cout << "none";
      }
      std::cout << '\n';
  }


  return 0;
}
