#include <iostream>

int main(void) {

  int row_num, col_num;
  while (std::cin >> row_num >> col_num) {
    int matrix[row_num][col_num] = {0};
    for(int i = 0; i < row_num; i++) {
      for(int j = 0; j < col_num; j++) {
        std::cin >> matrix[i][j];
      }
    }
    int transposed[col_num][row_num] = {0};
    for(int i = 0; i < col_num; i++) {
      for(int j = 0; j < row_num; j++) {
        transposed[i][j] = matrix[j][i];
        std::cout << transposed[i][j] << ' ';
      }
      std::cout << '\n';
    }
  }
    return 0;
}
