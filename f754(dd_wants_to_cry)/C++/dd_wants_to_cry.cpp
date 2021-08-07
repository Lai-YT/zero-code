#include <iostream>


int main(int argc, char const *argv[]) {
  /* fast io */
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int num_of_case{0};
  while (std::cin >> num_of_case) {

    long long money{0};
    int person{0};
    for (int i = 1; i <= num_of_case; ++i) {

      std::cin >> money >> person;
      long long distribution = money / person;
      int remain = money % person;

      std::cout << "Case " << i << " :\n";
      /*
       * the last person gets the extra remain,
       * others have only the distribution
       */
      for (int j = 1; j < person; ++j) {
        std::cout << "第" << j << "位 : 拿" << distribution << "元並說DD! BAD!\n";
      }
      std::cout << "第" << person << "位 : 拿" << distribution + remain << "元並說DD! BAD!\n";
    }
  }
  return 0;
}
