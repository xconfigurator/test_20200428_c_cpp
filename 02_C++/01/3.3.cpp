#include <iostream>
using namespace std;

// 注意！
// D::virfun() called

class B {
public:
  B() {}
  B(int i) { b = i; }
  virtual void virfun() { cout << "B::virfun() called" << endl; } // 这个是公有的

private:
  int b;
};

class D : public B {
public:
  D() {}
  D(int i, int j) : B(1) { d = j; }

private:
  int d;
  void virfun() { cout << "D::virfun() called" << endl; } // 这个是私有的
};

void fun(B *obj) { obj->virfun(); }

int main() {
  D *pd = new D;
  fun(pd);      // D::virfun() called
  
  // liuyang begin
  // pd->virfun(); 注意如果这样调用就是错的！
  B *pb = new D;
  fun(pb);      // D::virfun() called
  pb->virfun(); // D::virfun() called

  B *pb2 = new B;
  fun(pb2);     // B::virfun() called
  pb2->virfun();// B::virfun() called

  delete pd;
  pd = NULL;
  delete pb;
  pb = NULL;
  delete pb2;
  pb2 = NULL;
  // liuyang end
  return 0;
}