#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct LinkedList {
  int size;
  struct Node *head;
};

typedef struct Node Node;
typedef struct LinkedList LinkedList;


void freeMemory(LinkedList list) {
  Node *curr = list.head;
  while (curr != NULL) {
    Node *temp = curr;
    curr = curr->next;
    free(temp);
  }
}

void printList (LinkedList const list) {
  Node *curr = list.head;
  while (curr) {
    printf("%d ", curr->data);
    curr = curr->next;
  }
  printf("\n");
}

LinkedList Merge(LinkedList leftList, LinkedList rightList) {
  Node *leftCurr = leftList.head, *rightCurr = rightList.head;
  LinkedList newList = {
    .head = NULL,
    .size = leftList.size + rightList.size
  };
  if (leftCurr->data < rightCurr->data) {
    newList.head = leftCurr;
    leftCurr = leftCurr->next;
  } else {
    newList.head = rightCurr;
    rightCurr = rightCurr->next;
  }
  Node *tail = newList.head;
  while (leftCurr && rightCurr) {
    if (leftCurr->data < rightCurr->data) {
      tail->next = leftCurr;
      tail = tail->next;
      leftCurr = leftCurr->next;
    } else {
      tail->next = rightCurr;
      tail = tail->next;
      rightCurr = rightCurr->next;
    }
  }
  if (leftCurr)
    tail->next = leftCurr;
  else if (rightCurr)
    tail->next = rightCurr;

  return newList;
}

LinkedList MergeSort(LinkedList list) {
  if (list.size == 1) {
    return list;
  }
  Node *temp = list.head;
  for (int i = 0; i < list.size / 2 - 1; i++) {
    temp = temp->next;
  }
  Node *mid = temp->next;
  temp->next = NULL;

  LinkedList leftList = {
    .head = list.head,
    .size = list.size / 2
  };
  LinkedList rightList = {
    .head = mid,
    .size = list.size - list.size / 2
  };
  return Merge(MergeSort(leftList), MergeSort(rightList));
}


int main(void) {
  int size_of_list = 0;
  while (scanf("%d\n", &size_of_list) != EOF) {

    LinkedList list = {
      .head = NULL,
      .size = size_of_list
    };
    for (int i = 0; i < size_of_list; i++) {
      Node *newNode = (Node *) malloc (sizeof(Node));
      int data;
      scanf("%d", &data);
      newNode->data = data;
      newNode->next = list.head;
      list.head = newNode;
    }
    LinkedList newList = MergeSort(list);
    printList(newList);
    freeMemory(list);
  }

  return 0;
}
