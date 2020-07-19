#include <iostream>

int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  std::string password;
  while (std::cin >> password) {
    int try_times;
    std::string try_password;
    std::cin >> try_times;
    while (try_times != 0) {
      int count[10] = {0}, try_count[10] = {0};
      int a = 0, b = 0;
      --try_times;
      std::cin >> try_password;
      for (int i = 0; i < 4; i++) {
        if (try_password[i] == password[i]) ++a;
        else {
          ++try_count[((int)try_password[i] - 48) % 10];
          ++count[((int)password[i] - 48) % 10];
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
