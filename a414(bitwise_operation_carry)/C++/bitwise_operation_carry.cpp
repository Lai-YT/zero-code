#include <iostream>

int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  int number;
  int count;
  while (std::cin >> number) {
    if (!number) break;
    for (count = 0; number % 2; number/=2) count++;
    std::cout << count << '\n';
  }
  return 0;
}
