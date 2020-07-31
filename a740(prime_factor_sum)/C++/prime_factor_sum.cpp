#include <cstdio>
#include <cmath>

inline int sum_of_prime_factors(int number) {
  int sum = 0;
  while (number % 2 == 0) {
    sum += 2;
    number /= 2;
  }
  int ceil = sqrt(number);
  for (int n = 3; n <= ceil; n += 2) {
    while (number % n == 0) {
      sum += n;
      number /= n;
    }
  }
  if (number != 1) sum += number;
  return sum;
}

int main(int argc, char const *argv[]) {
  int number;
  while (scanf("%d", &number) != EOF) {
    printf("%d\n", sum_of_prime_factors(number));
  }
  return 0;
}
