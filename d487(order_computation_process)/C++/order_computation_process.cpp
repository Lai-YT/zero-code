#include <iostream>


int factorial(int n) {
  if(n == 1 || n == 0) {
    printf("1");
    return 1;
  }
  printf("%d * ", n);
  return n * factorial(n - 1);
}

int main(void) {
  int n;
  while (scanf("%d", &n) != EOF) {
    printf("%d! = ", n);
    printf(" = %d\n", factorial(n));
  }

  return 0;
}
