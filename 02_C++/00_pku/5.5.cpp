/*
课本p96
多层次派生

说明：
多层次派生情况下的构造函数和析构函数
派生类的成员包括派生类自己定义的成员、直接基类中定义的成员，以及所有间接基类的全部成员。

@author liyang copy form guowei
@since 2020/12/14
*/
#include <iostream>
using namespace std;

class A {
public:
    int n;
    A(int i):n(i) {
        cout << "A " << n << "constructed" << endl;
    }
    ~A() {
        cout << "A " << n << " deconstructed" << endl;
    }
};

class B:public A {
public:
    B(int i):A(i) {
        // cout << "B constructed" << endl;
        cout << "B " << n << "constructed" << endl;
    }
    ~B() {
        // cout << "B destructed" << endl;
        cout << "B " << n << " deconstructed" << endl;
    }
};

class C:public B {
public:
    C():B(2) {
        // cout << "B constructed" << endl;
        cout << "C constructed" << endl;
    }
    ~C() {
        // cout << "B descructed" << endl;
        cout << "C constructed" << endl;
    }
};

int main (int argc, char const *argv[]) {
    C obj;
    return 0;
}