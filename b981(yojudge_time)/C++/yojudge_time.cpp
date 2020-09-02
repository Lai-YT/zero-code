#include <iostream>

int main(int argc, char const *argv[]) {
  std::string line;
  while (std::getline(std::cin, line)) {
    char l;
    int part_time = 0, total_time = 0;
    for (int i = 0; i < line.length(); i++) {
      l = line[i];
      if (l >= '0' && l <= '9') part_time = part_time * 10 + l - 48;
      else {
        if (l == 'h') {
          total_time += part_time * 3600000;
          part_time = 0;
        } else if (l == 'm') {
          if (i + 1 < line.length() && line[i + 1] == 's') total_time += part_time;
          else total_time += part_time * 60000;
          part_time = 0;
        } else if (l == 's' && line[i - 1] != 'm') {
          total_time += part_time * 1000;
          part_time = 0;
        } else if (l == '.') {
          total_time += part_time * 1000 + (line[i + 1] - 48) * 100;
          break;
        }
      }
    }
    std::cout << total_time << '\n';
  }
  return 0;
}
