#include <iostream>

using namespace std;

struct Node {
  int value;
  Node* next;
};

class ClassTest {
 public:
  ClassTest() : v1(1) {};

  void p() { printf("%d \n", v1); };

  void p(int v1) { printf("%d \n", v1); }

  void r() { v1++; };

 private:
  int v1;
};

class LinkTest {
 public:
  void print(Node node) {
    Node* ptr = &node;

    while (ptr != NULL) {
      printf("%d", ptr->value);
      ptr = ptr->next;
    }
  }

 private:
};

int main() {
  // LinkTest
  LinkTest Link;
  Node node1, node2;

  node1.value = 1;
  node2.value = 2;

  node1.next = &node2;
  // if no declare node2.next=NULL, it shows "segmentation fault"
  node2.next = NULL;

  printf("%d\n", node1.value);
  printf("%d\n", node2.value);

  Link.print(node1);

  // ClassTest
  // ClassTest test;

  // int a = 99;
  // test.p();
  // test.r();
  // test.p();
  // test.p(a);

  return 0;
};