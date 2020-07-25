#include <cstdio>

typedef long long int lint;

lint pow(lint a, lint n) {
  lint result = 1;
  if (n == 0 || a == 1) return result;
  if (n > 100){
    for (lint i = 0; i < n / 100; i++) result *= a;
    return pow(result, 100) * pow(a, n % 100);
  } else if (n  > 10) {
    for (lint i = 0; i < n / 10; i++) result *= a;
    return pow(result, 10) * pow(a, n % 10);
  } else if (n % 2 == 0) {
    for (lint i = 0; i < n / 2; i++) result *= a;
    return result * result;
  } else if (n % 3 == 0) {
    for (lint i = 0; i < n / 3; i++) result *= a;
    return result * result * result;
  } else {
    for (lint i = 0; i < (n - 1) / 2; i++) result *= a;
    return result * result * a;
  }
}

int main(int argc, char const *argv[]) {
  lint a, n;
  while (scanf("%lld %lld", &a, &n)) {
    if (a == 0 && n == 0) {
      puts("All Over.\n");
      break;
    }
    printf("%lld\n", pow(a, n));
  }
  return 0;
}
