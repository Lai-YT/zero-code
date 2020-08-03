#include <cstdio>

int main(int argc, char const *argv[]) {
  int max_len_of_tape, num_of_label;
  while (scanf("%d %d\n", &max_len_of_tape, &num_of_label) != EOF) {
    int accum_len, len_of_interval, piece = 0, labels[num_of_label];
    scanf("%d", &labels[0]);
    accum_len = labels[0];
    for (int i = 1; i < num_of_label; i++) {
      scanf("%d", &labels[i]);
      len_of_interval = labels[i] - labels[i-1];
      if (len_of_interval + accum_len > max_len_of_tape) {
        accum_len = len_of_interval;
        piece++;
      } else if (len_of_interval + accum_len == max_len_of_tape) {
        accum_len = 0;
        piece++;
      } else accum_len += len_of_interval;
    }
    if (accum_len != 0) piece++; // last piece
    printf("%d\n", piece);
  }
  return 0;
}
