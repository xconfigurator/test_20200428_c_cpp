/*
p120
构造函数和析构函数中调用虚函数

说明：
在构造函数和析构函数中调用虚函数，不是多态。编译时即可确定，调用的函数是自己的类或基类中定义的函数，
  不会等到运行时才决定调用自己还是派生类的函数。

@author liyang copy form guowei
@since 2020/12/14
*/

#include <iostream>
using namespace std;

class A {
public:
    virtual void hello() {
        cout << "A::hello" << endl;
    }
    virtual void bye() {
        cout << "A::bye" << endl;
    }
};

class B :public A {
public:
    virtual void hello() {
        cout << "B::hello" << endl;
    }
    B() {
        hello();// 不是多态！  
    }
    ~B() {
        bye(); // 不是多态；
    }
};

class C:public B {
public:
    virtual void hello() {
        cout << "C::hello" << endl;
    }
};

// int main(int argc, char const *argv[]) {
int main(int argc, char const *argv[])  {
    C obj;
    return 0;
}