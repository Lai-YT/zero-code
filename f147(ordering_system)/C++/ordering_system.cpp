#include <iostream>
#include <map>
#include <utility>

class Meal {
public:
  std::string name;
  int price;

  Meal(std::string name = "", int price = 0): name(name),price(price) {}
  Meal(Meal const &other): name(other.name),price(other.price) {}

  Meal operator = (Meal const &other) {
      name = other.name;
      price = other.price;
      return *this;
  }
};

int main(int argc, char const *argv[]) {
  std::map<int, Meal> set, single;
  set.insert(std::make_pair(1, Meal("Medium Wac", 4)));
  set.insert(std::make_pair(2, Meal("WChicken Nugget", 8)));
  set.insert(std::make_pair(3, Meal("Geez Burger", 7)));
  set.insert(std::make_pair(4, Meal("ButtMilk Crispy Chicken", 6)));
  set.insert(std::make_pair(5, Meal("Plastic Toy", 3)));

  single.insert(std::make_pair(1, Meal("German Fries", 2)));
  single.insert(std::make_pair(2, Meal("Durian Slices", 3)));
  single.insert(std::make_pair(3, Meal("WcFurry", 5)));
  single.insert(std::make_pair(4, Meal("Chocolate Sunday", 7)));
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  int command;
  Meal meal;
  while (std::cin >> command) {
    int total = 0;
    while (command != 0) {
      if (command == 1) {
        std::cin >> command;
        meal = set[command];
      }
      else {
        std::cin >> command;
        meal = single[command];
      }
      std::cout << meal.name << ' ' << meal.price << '\n';
      total += meal.price;
      std::cin >> command;
    }
    std::cout << "Total: " << total << '\n';
  }
  return 0;
}
