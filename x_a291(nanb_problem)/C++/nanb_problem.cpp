#include <iostream>

int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);

  int password[4];
  while (std::cin >> password[0] >> password[1] >> password[2] >> password[3]) {
    int try_times;
    int try_password[4];
    std::cin >> try_times;
    while (try_times != 0) {
      int count[10] = {0}, try_count[10] = {0};
      int a = 0, b = 0;
      --try_times;
      std::cin >> try_password[0] >> try_password[1] >> try_password[2] >> try_password[3];
      for (int i = 0; i < 4; i++) {
        if (try_password[i] == password[i]) ++a;
        else {
          ++try_count[try_password[i] % 10];
          ++count[password[i] % 10];
        }
      }
      for (int i = 0; i < 10; i++) {
        if (try_count[i] != 0 && count[i] != 0) {
          b += (try_count[i] > count[i] ? count[i] : try_count[i]);
          if (b >= 4 - a) break;
        }
      }
      std::cout << a << 'A' << b << "B\n";
    }
    std::cout << std::flush; // optional
  }

  return 0;
}
