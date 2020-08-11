#include <iostream>

inline bool is_leap(int year) {
  if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) return true;
  return false;
}

int days_of_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int get_days(int year, int month, int day) {
  int days = (year-1) * 365 + (year-1)/4 - (year-1)/100 + (year-1)/400;
  for (int i = 0; i < month - 1; i++) days += days_of_month[i];
  days += day;
  if (is_leap(year) && month > 2) days++;
  return days;
}

int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  int year[2], month[2], day[2];

  while (std::cin >> year[0] >> month[0] >> day[0] >> year[1] >> month[1] >> day[1]) {
      std::cout << abs(get_days(year[1], month[1], day[1]) - get_days(year[0], month[0], day[0])) << '\n';
  }
  return 0;
}
