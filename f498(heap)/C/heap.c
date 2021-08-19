#include <stdio.h>


static inline void Swap(int* const a, int* const b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}


static inline int Parent(const int i) {
  return i >> 1;
}


void MinHeapInsertion(int* const min_heap, int i) {
  while (i > 1 && min_heap[i] < min_heap[Parent(i)]) {
    Swap(min_heap + i, min_heap + Parent(i));
    i = Parent(i);
  }
}


void MaxHeapInsertion(int* const max_heap, int i) {
  while (i > 1 && max_heap[i] > max_heap[Parent(i)]) {
    Swap(max_heap + i, max_heap + Parent(i));
    i = Parent(i);
  }
}


int main(int argc, char const *argv[]) {
  int size = 0;
  while (scanf("%d", &size) != EOF) {
    /* remain index 0 not used */
    int min_heap[size + 1];
    int max_heap[size + 1];
    /* just to clean trash */
    min_heap[0] = 0;
    max_heap[0] = 0;

    for (int i = 1; i <= size; ++i) {
      /* read the number */
      scanf("%d", min_heap + i);
      max_heap[i] = min_heap[i];
      /* adjust */
      MinHeapInsertion(min_heap, i);
      MaxHeapInsertion(max_heap, i);
    }
    /*
     * ouput in level order
     */
    for (int i = 1; i <= size; ++i) {
      printf("%d ", min_heap[i]);
    }
    putchar('\n');
    for (int i = 1; i <= size; ++i) {
      printf("%d ", max_heap[i]);
    }
    putchar('\n');

  }  /* while-loop */

  return 0;
}
