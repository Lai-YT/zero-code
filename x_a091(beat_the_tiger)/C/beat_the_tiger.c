#include <stdio.h>
#include <stdlib.h>


/* segmentation fault (core dumped) */

typedef struct Node {
  struct Node* prev;
  struct Node* next;
  int val;
} Node;


typedef struct DoublyLinkedList {
  Node* front;
  Node* back;
  int size;
} DoublyLinkedList;


void Insert(DoublyLinkedList* const list, Node* const node) {
  if (!list->size) {
    list->front = node;
    list->back = node;
    ++list->size;
    return;
  }
  /* set up link */
  list->back->next = node;
  node->prev = list->back;
  list->back = node;
  ++list->size;
  /* sort */
  Node* curr = node;
  for (int i = 1; i < list->size && curr->val < curr->prev->val; ++i) {
    /* swap value */
    int temp = curr->val;
    curr->val = curr->prev->val;
    curr->prev->val = temp;
  }
}


void PopBack(DoublyLinkedList* const list) {
  if (list->back != NULL && list->front != NULL) {
    if (list->back == list->front) {
      free(list->back);
      list->back = NULL;
      list->front = NULL;
      return;
    }

    list->back = list->back->prev;
    free(list->back->next);
    list->back->next = NULL;
  }
}


void PopFront(DoublyLinkedList* const list) {
  if (list->back != NULL && list->front != NULL) {
    if (list->back == list->front) {
      free(list->front);
      list->front = NULL;
      list->back = NULL;
      return;
    }

    list->front = list->front->next;
    free(list->front->prev);
    list->front->prev = NULL;
  }
}


void Free(DoublyLinkedList* const list) {
  while (list->back != NULL && list->front != NULL) {
    if (list->back == list->front) {
      free(list->back);
      list->back = NULL;
      list->front = NULL;
      return;
    }

    list->back = list->back->prev;
    free(list->back->next);
    list->back->next = NULL;
  }
}


int main(int argc, char const *argv[]) {
  DoublyLinkedList ascending_list = {NULL, NULL, 0};
  int n = 0;
  while (scanf("%d", &n) != EOF) {
    switch (n) {
      case 1: {
      /* insert */
        Node* node = malloc(sizeof(Node));
        node->prev = NULL;
        node->next = NULL;
        scanf("%d", &(node->val));
        Insert(&ascending_list, node);
        break;
      }
      case 2:
      /* query max */
        printf("%d\n", ascending_list.back->val);
        PopBack(&ascending_list);
        break;
      case 3:
      /* query max */
        printf("%d\n", ascending_list.front->val);
        PopFront(&ascending_list);
        break;
      default:
        printf("%d\n", n);
        break;
    }
  }
  Free(&ascending_list);
  
  return 0;
}
