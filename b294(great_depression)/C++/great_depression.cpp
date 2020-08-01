#include <cstdio>

int main(int argc, char const *argv[]) {
  int days;
  while (scanf("%d\n", &days) != EOF) {
    int cost = 0, amount;
    for (int d = 1; d <= days; d++) {
      scanf("%d", &amount);
      cost += amount * d;
    }
    printf("%d\n", cost);
  }
  return 0;
}
