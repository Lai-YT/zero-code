#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int num_of_people;
  while (cin >> num_of_people) {
    if (!num_of_people) break;
    int age;
    int age_list[100] = {0};
    for (int i = 0; i < num_of_people; ++i) {
      cin >> age;
      ++age_list[age];
    }
    string result = "";
    for (int i = 0; i < 100; ++i) {
      if (age_list[i]) {
        for (int j = 0; j < age_list[i]; ++j)
          result += to_string(i) + " "; // a little bit faster than cout every time
      }
    }
    cout << result << '\n';
  }
  return 0;
}
