#include <stdio.h>


int main(int argc, char const *argv[]) {

  int num_of_case = 0;
  while (scanf("%d", &num_of_case) != EOF) {

    long long money = 0;
    int person = 0;
    for (int i = 1; i <= num_of_case; ++i) {

      scanf("%lld %d", &money, &person);
      long long distribution = money / person;
      int remain = money % person;

      printf("Case %d :\n", i);
      /*
       * the last person gets the extra remain,
       * others have only the distribution
       */
      for (int j = 1; j < person; ++j) {
        printf("第%d位 : 拿%lld元並說DD! BAD!\n", j, distribution);
      }
      printf("第%d位 : 拿%lld元並說DD! BAD!\n", person, distribution + remain);
    }
  }
  return 0;
}
