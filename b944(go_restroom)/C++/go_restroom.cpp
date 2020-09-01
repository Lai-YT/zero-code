#include <iostream>

int main(int argc, char const *argv[]) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  int limit, num, time, curr = 0;
  bool found;
  std::cin >> limit;
  int urinal[limit + 2] = {0}, remain_time[limit] = {0};
  int remain = limit;
  while (std::cin >> num >> time) {
    found = false;
    if (remain) {
      for (int i = 1; i <= limit; i++) {
        if (urinal[i]) continue;
        if (!urinal[i-1] and !urinal[i+1]) {
          curr = i;
          found = true;
          break;
        }
      }
      if (!found) for (int i = 1; i <= limit; i++)
          if (!urinal[i]) {
            curr = i;
            found = true;
            break;
          }
      urinal[curr] = num;
      remain_time[curr - 1] = time;
      remain--;
    } else {
      std::cout << " Not enough\n";
      curr = 0;
    }
    std::cout << "Number:";
    for (int i = 1; i <= limit; i++) std::cout << ' ' << urinal[i];
    std::cout << "\n  Time:";
    for (int i = 0; i < limit; i++) {
      int & t = remain_time[i];
      std::cout << ' ' << t;
      if (t) if (!--t) {
          urinal[i + 1] = 0;
          remain++;
        }
    }
    std::cout << '\n';
    if (!time && curr) {
      urinal[curr] = 0;
      remain++;
    }
  }
  return 0;
}
