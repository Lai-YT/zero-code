#include <iostream>

int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);

  int num_of_fields;
  while (std::cin >> num_of_fields) {
    int fields[num_of_fields] = {0};
    for (int &f: fields) std::cin >> f;
    int start = 0, end = 0, flowers = 0;
    for (int i = 0; i < num_of_fields; i++) {
      if (fields[i] == 1) {
        start = i;
        break;
      }
    }
    for (int i = num_of_fields - 1; i >= 0; i--) {
      if (fields[i] == 1) {
        end = i;
        break;
      }
    }
    for (int i = start + 1; i < end; i++) {
      if (fields[i] == 9) {
        if (fields[i - 1] != 9) fields[i - 1] = 1;
        if (fields[i + 1] != 9) fields[i + 1] = 1;
      }
    }
    for (int i = start + 1; i < end; i++) {
      if (fields[i] == 0) flowers++;
    }
    std::cout << flowers << '\n';
  }
  return 0;
}
