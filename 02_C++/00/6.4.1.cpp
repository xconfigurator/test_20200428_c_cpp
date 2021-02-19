/*
p119
在非构造函数，非析构函数的成员函数中调用虚函数，是多态。
*/
#include <iostream>
using namespace std;

class CBase {
public:
    void func1() {
        func2();
    }
    virtual void func2() {
        cout << "CBase::func2" << endl;
    }
};

class CDerived: public CBase {
public:
    virtual void func2() {
        cout << "CDerivce:func2()" << endl;
    }
};

int main(int argc, char const *argv[]) {
    CDerived d;
    d.func1();
    return 0;
}