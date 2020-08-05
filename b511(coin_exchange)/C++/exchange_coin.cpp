#include <iostream>

int num_of_denos;
int denominations[5];
int counts[5];

void exchange(int money, int index_of_deno) {
  if (!money) {
    std::cout << '(';
    for (int i = 0; i < num_of_denos - 1; i++) std::cout << counts[i] << ',';
    std::cout << counts[num_of_denos-1] << ")\n";
    return;
  }
  if (index_of_deno >= num_of_denos) return;
  int max_amount = money / denominations[index_of_deno];
  for (int amount = 0; amount <= max_amount; amount++) {
    counts[index_of_deno] = amount;
    exchange(money - denominations[index_of_deno] * amount, index_of_deno + 1);
  }
}

int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  int money;
  while (std::cin >> num_of_denos) {
    for (int i = 0; i < num_of_denos; i++) std::cin >> denominations[i];
    std::cin >> money;
    exchange(money, 0);
  }
  return 0;
}
