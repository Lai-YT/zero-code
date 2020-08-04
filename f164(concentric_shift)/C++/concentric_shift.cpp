#include <iostream>

class ListNode {
public:
  int data;
  ListNode *next, *prev;

  ListNode():data(0),next(nullptr),prev(nullptr) {}
  ListNode(int data):data(data),next(nullptr),prev(nullptr) {}
};

class DoublyLinkedList {
private:
  ListNode *front, *back;
  int listSize;
public:
  DoublyLinkedList():front(nullptr),back(nullptr),listSize(0) {}
  ~DoublyLinkedList();

  void push_front(int data);
  void push_back(int data);
  // insert at index+1. index start from 0
  void insert(int index, int data);
  // remove the nodes that match the data
  void remove(int data);
  // return the index of the first node that matches the data
  int index(int data) const;
  int at(int index);
  int size() const;
  // print prev and next
  void printAdjacency(int data) const;
  void printList() const;
  void clear();
};

void DoublyLinkedList::push_front(int data) {
  ListNode* newNode = new ListNode(data);
  if (front != nullptr) {
    front->prev = newNode;
    newNode->next = front;
    front = newNode;
  } else {
    front = newNode;
    back = newNode;
  }
  listSize++;
}

void DoublyLinkedList::push_back(int data) {
  ListNode* newNode = new ListNode(data);
  if (back != nullptr) {
    back->next = newNode;
    newNode->prev = back;
    back = newNode;
  } else {
    back = newNode;
    front = newNode;
  }
  listSize++;
}

void DoublyLinkedList::insert(int index, int data) {
  if (index == 0) {
    this->push_front(data);
    return;
  }
  ListNode *newNode = new ListNode(data);
  ListNode *current = front;
  int curr_index = 0;
  while (curr_index != index) {
    current = current->next;
    curr_index++;
  }
  current->prev->next = newNode;
  newNode->prev = current->prev;
  newNode->next = current;
  current->prev = newNode;
  listSize++;
  return;
}

void DoublyLinkedList::remove(int data) {
  ListNode *current = front, *previous = nullptr;
  while (current != nullptr) {
    if (current->data != data) {
      previous = current;
      current = current->next;
    } else if (current->data == data && current == front) {
      front = front->next;
      front->prev = nullptr;
      delete current;
      current = front;
      listSize--;
    } else if (current->data == data && current == back) {
      previous->next = nullptr;
      back = previous;
      delete current;
      current = nullptr;
      listSize--;
    } else {
      previous->next = current->next;
      current->next->prev = previous;
      delete current;
      current = previous->next;
      listSize--;
    }
  }
}

int DoublyLinkedList::index(int data) const {
  int index = 0;
  ListNode *current = front;
  while (index < listSize) {
    if (current->data == data) return index;
    current = current->next;
    index++;
  }
  return -1;
}

int DoublyLinkedList::at(int index) {
  ListNode *current;
  int curr_index;
  if (index < listSize / 2) {
    current = front;
    curr_index = 0;
    while (curr_index != index) {
      current = current->next;
      curr_index++;
    }
  } else {
    current = back;
    curr_index = listSize - 1;
    while (curr_index != index) {
      current = current->prev;
      curr_index--;
    }
  }
  return current->data;
}

int DoublyLinkedList::size() const {
  return listSize;
}

void DoublyLinkedList::printAdjacency(int data) const {
  int index = 0;
  ListNode *current = front;
  while (index < listSize) {
    if (current->data == data) break;
    current = current->next;
    index++;
  }
  if (index == 0) {
    std::cout << back->data << ' ' << front->next->data << ' ';
    return;
  }
  if (index == listSize - 1) {
    std::cout << back->prev->data << ' ' << front->data << ' ';
    return;
  }
  std::cout << current->prev->data << ' ' << current->next->data << ' ';
  return;
}

void DoublyLinkedList::printList() const {
  if (front == nullptr) {
    std::cout << "List is empty\n";
    return;
  };
  ListNode *current = front;
  while (current != back) {
    std::cout << current->data << " -> ";
    current = current->next;
  }
  std::cout << current->data << '\n';
}

void DoublyLinkedList::clear() {
  ListNode *current = front;
  while (front != nullptr) {
    current = front;
    front = front->next;
    delete current;
  }
  back = nullptr;
  listSize = 0;
}

DoublyLinkedList::~DoublyLinkedList() {
  clear();
}


int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  int num_of_balls, num_of_commands, num_of_queries;
  while (std::cin >> num_of_balls >> num_of_commands >> num_of_queries) {
    DoublyLinkedList balls;
    for (int b = 1; b < num_of_balls; b += 2) {
      balls.push_back(b-1);
      balls.push_back(b);
    }
    if (num_of_balls % 2) balls.push_back(num_of_balls-1);
    char pos;
    int target, destination, ball_pos;
    for (int command = 0; command < num_of_commands; command++) {
      std::cin >> pos >> target >> destination;
      if (target == destination) continue;
      balls.remove(target);
      ball_pos = balls.index(destination);
      if (pos == 'F') {
        if (ball_pos + 1 == balls.size()) balls.push_front(target);
        else balls.insert(ball_pos + 1, target);
      } else balls.insert(ball_pos, target);
    }
    int ball_1, ball_2;
    for (int q = 1; q < num_of_queries; q += 2) {
      std::cin >> ball_1 >> ball_2;
      balls.printAdjacency(ball_1);
      balls.printAdjacency(ball_2);
    }
    if (num_of_queries % 2) {
      std::cin >> ball_1;
      balls.printAdjacency(ball_1);
    }
    std::cout << '\n';
  }
  return 0;
}
