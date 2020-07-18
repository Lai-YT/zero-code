#include <stdio.h>

int main(int argc, char const *argv[]) {
  int ceil;
  while (scanf("%d", &ceil) && ceil != 0) {
    for (int cur = 1; cur < ceil; cur++) {
      if (cur % 7 != 0) printf("%d ", cur);
    }
    printf("\n");
  }
  return 0;
}
