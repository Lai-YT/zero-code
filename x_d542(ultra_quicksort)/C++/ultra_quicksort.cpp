#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int num_of_nums;
  while (cin >> num_of_nums) {
    if (num_of_nums == 0) break;
    int numbers[num_of_nums];
    for (int i = 0; i < num_of_nums; i += 2) cin >> numbers[i] >> numbers[i+1];
    if (num_of_nums % 2) cin >> numbers[num_of_nums-1];
    int swaps = 0;
    for (int i = 0; i < num_of_nums; i++) {
      for (int j = i + 1;  j < num_of_nums; j++) {
        if (numbers[i] > numbers[j]) swaps++;
      }
    }
    cout << swaps << '\n';
  }
  return 0;
}
