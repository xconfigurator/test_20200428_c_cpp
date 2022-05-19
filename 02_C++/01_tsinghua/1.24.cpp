#include <iostream>
using namespace std;

// 非常标准的虚析构函数执行演示！
class A {
public:
  A() { cout << "A::A() called." << endl; }
  virtual ~A() { cout << "A::~A() called" << endl; } // 如果不加virtual，则析构时不会执行~B()，无论~B()前是否带有virtual
};

class B : public A {
public:
  B(int i) {
    cout << "B::B() called" << endl;
    buf = new char[i];
  }
  virtual ~B() { // 不加virtual在本题环境也会被执行。不过最好加上
    delete[] buf;
    cout << "B::~B() called" << endl;
  }

private:
  char *buf;
};

void fun(A *a) { delete a; }

int main(int argc, char const *argv[]) {
  A *a = new B(15);
  fun(a);
  return 0;
}