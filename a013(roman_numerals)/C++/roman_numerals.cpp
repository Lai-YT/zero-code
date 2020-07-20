#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

class Pair {
public:
  Pair() {}

  Pair(std::string key, int value):key(key),value(value) {}

  Pair(Pair const & p):key(p.key),value(p.value) {}

  int & getValue() {
    return value;
  }

  std::string getKey() const {
    return key;
  }

private:
  std::string key;
  int value;
};

class Dict {
public:
  Dict() {}

  void append(Pair pair) {
    pairs.push_back(pair);
  }

  Dict(Dict const & d):pairs(d.pairs) {}

  int & operator [] (std::string key) {
    for (Pair & pair: pairs) {
      if (pair.getKey() == key) {
        return pair.getValue();
      }
    }
    throw std::string("Key doesn't exist.");
  }

  std::vector<Pair> & getPairs() {
    return pairs;
  }

private:
  std::vector<Pair> pairs;
};

Dict roman_dict;

int roman_to_decimal(std::string roman_number) {
  int deciml_number = 0, i = 0;
  while (i < roman_number.length()) {
    if (i + 1 < roman_number.length()) {
      if(roman_number[i] == 'I' && roman_number[i + 1] == 'V' || roman_number[i] == 'I' && roman_number[i + 1] == 'X'
      || roman_number[i] == 'X' && roman_number[i + 1] == 'L' || roman_number[i] == 'X' && roman_number[i + 1] == 'C'
      || roman_number[i] == 'C' && roman_number[i + 1] == 'D' || roman_number[i] == 'C' && roman_number[i + 1] == 'M') {
        deciml_number += roman_dict[std::string(1, roman_number[i]) + std::string(1, roman_number[i + 1])];
        i += 2;
        continue;
      }
    }
    deciml_number += roman_dict[std::string(1, roman_number[i])];
    i++;
  }
  return deciml_number;
}

std::string decimal_to_roman(int &decimal_number) {
  std::sort(roman_dict.getPairs().begin(), roman_dict.getPairs().end(), [](Pair former, Pair latter) {
    return former.getValue() > latter.getValue();
  });
  if (decimal_number == 0) return "ZERO";
  std::string roman_number = "";
  for (Pair p: roman_dict.getPairs()) {
    int times = decimal_number / p.getValue();
    decimal_number %= p.getValue();
    while (times != 0) {
      roman_number += p.getKey();
      times--;
    }
  }
  return roman_number;
}

int main(void) {
  
  roman_dict.append(Pair("M", 1000));
  roman_dict.append(Pair("CM", 900));
  roman_dict.append(Pair("D", 500));
  roman_dict.append(Pair("CD", 400));
  roman_dict.append(Pair("C", 100));
  roman_dict.append(Pair("XC", 90));
  roman_dict.append(Pair("L", 50));
  roman_dict.append(Pair("XL", 40));
  roman_dict.append(Pair("X", 10));
  roman_dict.append(Pair("IX", 9));
  roman_dict.append(Pair("V", 5));
  roman_dict.append(Pair("IV", 4));
  roman_dict.append(Pair("I", 1));

  std::string r1, r2;
  while (std::cin >> r1 >> r2) {
    int n1 = roman_to_decimal(r1);
    int n2 = roman_to_decimal(r2);
    int difference = abs(n1 - n2);
    std::cout << decimal_to_roman(difference) << '\n';
  }

  return 0;
}
