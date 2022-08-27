#ifndef HELPERS_COMBINATION_HPP_
#define HELPERS_COMBINATION_HPP_

#include <algorithm>
#include <memory>
#include <vector>


namespace helpers {
  
/*
* Return all possible combinations of selecting k elements from s.
*
* (1) Note that the combinations of elements is in respect of their positions,
*  which means if there are duplicated elements in s, you'll get duplicated
*  combinations, too.
* (2) The order of combinations is unspecified.
*/
template<typename T>
std::vector<std::vector<T>> KCombinations(const std::vector<T>& s, const size_t k) {
  /*
  * Generate a mask array and have the true positions be the positions of the
  * elements to select in each combinations.
  */
  std::vector<bool> mask(s.size(), true);
  std::fill(mask.begin() + k, mask.end(), false);

  /*
  * Putting all trues(1s) in the front makes the mask sorted in a descending order,
  * so we use std::prev_permutation to get all possible permutations of mask.
  * And the permutations are indeed "combinations" in respect of the positions.
  */
  std::vector<std::vector<T>> combinations{};
  /* don't want to count the factorial, but must will it be greater than the size */
  combinations.reserve(s.size());
  do {
    std::vector<T> comb(k);
    for (size_t i = 0, j = 0;
      j < k && i < s.size();  /* shortcut when k elements selected */
      ++i) {
        if (mask.at(i)) {
          /* select */
          comb.at(j++) = s.at(i);
        }
    }
    combinations.push_back(std::move(comb));
  } while (std::prev_permutation(mask.begin(), mask.end()));

  return combinations;
}

}  /* namespace helpers */


#endif /* end of include guard: HELPERS_COMBINATION_HPP_ */
