/*
虚函数的用法 P112

写出程序输出

说明：
程序2与程序1唯一的区别是，Base中的Fn()被生命为Fn(int), 而SubClass版本中被生命为Fn(float).
因为如果在子类中不用相同的参数来声明为vritual的话，成员函数不能被多态地重载，不管他们是否被声明为virtual。
因此在第二个调用中的float被转换为int，并且在Test()中同样的Base::Fn(int)被第二次调用。
*/
#include <iostream>
using namespace std;

class Base {
public:
    virtual void Fn(int x) {
        cout << "In Base class, int x = " << x << endl;
    }
};

class SubClass : public Base {
public:
/*
    virtual void Fn(int x) {
        cout << "In SubClass class, int x = " << x << endl;
    }*/
    virtual void Fn(float x) {
        cout << "In SubClass, float x = " << x << endl;
    }
};

void Test(Base& b) {
    int i = 1;
    b.Fn(i);// 易错：注意父类引用只认识父类的方法，如果子类中重写了对应的虚函数则多态调用
    float f = 2.0;
    b.Fn(f);// 易错：注意父类引用只认识父类的方法，如果子类中重写了对应的虚函数则多态调用
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