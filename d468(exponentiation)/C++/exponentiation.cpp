#include <iostream>

typedef long long int lint;

lint pow(lint a, lint n) {
  lint result = 1;
  if (n == 0) return 1;
  if (a == 1) return 1;
  if (a == -1) {
    if (n % 2 == 0) return 1;
    return -1;
  }
  if (n > 100){
    for (lint i = 0; i < n / 100; i++) result *= a;
    return pow(pow(a, n / 100), 100) * pow(a, n % 100);
  } else if (n  > 10) {
    for (lint i = 0; i < n / 10; i++) result *= a;
    return pow(result, 10) * pow(a, n % 10);
  } else if (n % 2 == 0) {
    for (lint i = 0; i < n / 2; i++) result *= a;
    return result * result;
  } else if (n % 3 == 0) {
    for (lint i = 0; i < n / 3; i++) result *= a;
    return result * result * result;
  } else {
    for (lint i = 0; i < (n - 1) / 2; i++) result *= a;
    return result * result * a;
  }
}

int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);

  lint a, n;
  std::string s;
  while (std::cin >> a) {
    if (a == -1) {
      std::cin >> s;
      if (s[s.length()-1] % 2 == 0) std::cout << "1\n";
      else std::cout << "-1\n";
    } else if (a == 1) {
      std::cin >> s;
      std::cout << "1\n";
    } else if (a == 0) {
      std::cin >> s;
      if (s == "0") {
        std::cout << "All Over.\n";
        break;
      }
      std::cout << "0\n";
    } else {
      std::cin >> n;
      std::cout << pow(a, n) << '\n';
    }
  }
  return 0;
}
