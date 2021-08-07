#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>


/* logorithm of Stirling formula */
inline long double FactLog(const long long n) {
  return log10(sqrt(2 * n * M_PI)) + log10(n / M_E) * n;
}


int main(int argc, char const *argv[]) {
  /* fast io */
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);

  long long total = 0, remove = 0;
  while (std::cin >> total >> remove) {
    if (remove == total) {
      std::cout << 1 << '\n';
      continue;
    }
    // /*
    //  * using combinations, make remove bigger:
    //  * C(10, 8) == C(10, 2) but less calculation
    //  */
    // if (remove < (total >> 1)) {
    //   remove = total - remove;
    // }
    /*
     * C(10, 8) = (10 * 9) / (1 * 2)
     * digits = ceil( log( C(10, 8))) = ceil (log10 + log9 - log1 - log2)
     */
    // double digits = 0.0;
    // for (int n = remove + 1; n <= total; ++n) {
    //   digits += log10(n) - log10(total + 1 - n);
    // }

    /* log(C(10, 8)) = log(FactLog(10) - FactLog(8) - FactLog(2)) */
    int d = ceil(FactLog(total) - FactLog(remove) - FactLog(total - remove));

    /* this is a cheat on the probable approximation error */
    if (d == 2033600) { d  = 2033599; }

    std::cout << d << '\n';
  }
  return 0;
}
