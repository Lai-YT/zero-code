#include <bitset>
#include <iostream>
#include <string>


void PrintNumOfOnes(unsigned num);

unsigned CountOnes(unsigned num);

std::string ToNoLeadingZeroBinaryString(unsigned num);


int main(int argc, char const *argv[]) {
  unsigned num = 0;
  while (std::cin >> num) {
    if (num == 0) {
      break;
    }
    PrintNumOfOnes(num);
  }
  return 0;
}


void PrintNumOfOnes(unsigned num) {
  std::cout << "The parity of " << ToNoLeadingZeroBinaryString(num)
            << " is " << CountOnes(num) << " (mod 2)." << '\n';
}


unsigned CountOnes(unsigned num) {
  unsigned num_of_ones = 0;
  while (num) {
    ++num_of_ones;
    /* keep removing the least significant 1, fast for sparse 1s */
    num &= (num - 1);
  }
  return num_of_ones;
}


std::string ToNoLeadingZeroBinaryString(unsigned num) {
  auto binary = std::bitset<32>(num).to_string();
  /* there must have at least one '1' since 0 is the terminator */
  binary.erase(0, binary.find_first_of('1'));
  return binary;
}
