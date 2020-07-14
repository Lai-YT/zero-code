#include <stdio.h>

int main(void) {
  int a, b, n;
  while (scanf("%d %d %d", &a, &b, &n) != EOF) {
    printf("%d.", a / b);

    int digit = 0;
    while (digit != n) {
      a = a % b;
      a *= 10;
      printf("%d", a / b);
      digit++;
    }
    printf("\n");
  }

  return 0;
}
