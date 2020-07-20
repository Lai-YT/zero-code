#include <iostream>
#include <vector>
int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);

  int num_of_fields;
  while (std::cin >> num_of_fields) {
    int fields[num_of_fields] = {0};
    for (int &f: fields) std::cin >> f;
    int start = 0, end = 0, flowers = 0;
    std::vector<int> fence_position;
    int num_of_fences = 0;
    for (int i = 0; i < num_of_fields; i++) {
      if (fields[i] == 1) {
        fence_position.push_back(i);
        num_of_fences++;
      }
    }

    int i = 0;
    while (i < num_of_fences - 1) {
      start = fence_position.at(i);
      end = fence_position.at(i + 1);
      int j = start + 1;
      while (j < end) {
        if (fields[j] == 0 && fields[j + 1] != 9 && fields[j - 1] != 9)
          flowers++;
        j++;
      }
      i++;
    }
    std::cout << flowers << '\n';
  }
  return 0;
}
