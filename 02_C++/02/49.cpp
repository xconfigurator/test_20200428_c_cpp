/*
窥探虚函数 P107

运行下面的程序段，写出它的输出并说明为什么。

说明：VPTR & VTABLE
*/
#include <iostream>
using namespace std;

class NoVirtual {
public:
    void Foo() {}

private:
    int x;
};

class WithVirtual {
public:
    virtual void Foo() {}

private:
    int x;
};

int main(int argc, char const* argv[]) {
    cout << "sizeof(NoVirtual) = " << sizeof(NoVirtual) << endl;
    cout << "sizeof(WithVirtual) = " << sizeof(WithVirtual) << endl;
    return 0;
}