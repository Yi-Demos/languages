#include <iostream>

using namespace std;

struct LL {
  int value;
  LL* next;
};

class TEST {
  public:
    TEST(): v1(1) {};

    void p() {
      printf("%d \n", v1);
    };

    void p(int v1) {
      printf("%d \n", v1);
    }

    void p(int v1) {
      printf("%d \n", v1);
    }

    void r() {
      v1++;
    };

  private:
    LL ll;
    int v1;
};

int main () {
  TEST test;
  int a = 99;

  test.p();
  test.r();
  test.p();
  test.p(a);

  return 0;
};