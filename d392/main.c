#include <ctype.h>  // isdigit
#include <stddef.h> // size_t
#include <stdio.h>
#include <stdlib.h> // atoi

int main(int argc, char const *argv[]) {
  // a long int is no longer than 20 bits (decimal)
  char buf[21] = {'\0'};
  size_t pos = 0;
#define CLEAR()                                                                \
  pos = 0;                                                                     \
  buf[0] = '\0';
#define HAS_UNCLEARED() (buf[0] != '\0')
  char c;
  while ((c = getchar()) != EOF) {
    long int sum = 0;
    do {
      if (isdigit(c)) {
        buf[pos++] = c;
      } else if (HAS_UNCLEARED()) {
        buf[pos] = '\0';
        sum += atoi(buf);
        CLEAR();
      }
    } while ((c = getchar()) != '\n');
    if (HAS_UNCLEARED()) {
      buf[pos] = '\0';
      sum += atoi(buf);
      CLEAR();
    }
    printf("%ld\n", sum);
  }
#undef CLEAR
#undef HAS_UNCLEARED
  return 0;
}
