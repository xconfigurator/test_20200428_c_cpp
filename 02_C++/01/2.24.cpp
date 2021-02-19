#include <iostream>
using namespace std;

// 
class B {
public:
  B() { cout << "B::B() construction." << endl; }
  virtual ~B() { cout << "B::~B() destruction." << endl; }
};

class D : public B {
public:
  D(int i) {
    cout << "D::D() construction." << endl;
    buf = new char[i];
  }
  virtual ~D() {
    delete[] buf;
    cout << "D::D() destruction." << endl;
  }

private:
  char *buf;
};

void fun(B *a) {
    delete a;
}

int main() {
    B *a = new D(25);
    fun(a);
    return 0;
}