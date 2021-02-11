#include <iostream>

int dp[10001] = {0};

inline void getWay() {
  dp[1] = 1;
  dp[2] = 2;
  for (int i = 3; i < 10001; ++i) {
    dp[i] = dp[i - 1] + dp[i - 2];
    if (dp[i] > 1000000007) {
      dp[i] %= 1000000007;
    }
  }
}

int main(int argc, char const *argv[]) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  getWay();
  int num = 0;
  while (std::cin >> num) {
    std::cout << dp[num] << '\n';
  }
  return 0;
}
