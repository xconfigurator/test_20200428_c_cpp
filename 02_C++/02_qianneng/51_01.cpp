/*
虚函数的用法 P111

写出程序输出
*/
#include <iostream>
using namespace std;

class Base {
public:
    virtual void Fn() {
        cout << "In Base class" << endl;
    }
};

class SubClass : public Base {
public:
    virtual void Fn() {
        cout << "In Subclass" << endl;
    }
};

void Test(Base& b) {
    b.Fn();
}

int main(int argc, char const *argv[]) {
    Base bc;
    SubClass sc;
    cout << "Calling Test(bc)" << endl;
    Test(bc);
    cout << "Calling Test(sc)" << endl;
    Test(sc);
    return 0;
}