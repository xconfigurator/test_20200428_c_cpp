/*
深拷贝与浅拷贝 P72

解释下面程序中是什么错误，并改正。
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

class MyClass {
public:
    MyClass(int i);
    ~MyClass() {delete p;}
    friend int GetVal(MyClass obj);
private:
    int *p;
};

MyClass::MyClass(int i) {
    p = new int;
    if (!p) {
        cout << "Allocation error" << endl;
        exit(1);
    }
    *p = i;
}

int GetVal(MyClass obj) {
    return *obj.p;
}

int main(int argc, char const *argv[]) {
    MyClass a(1), b(2);
    cout << GetVal(a) << " " << GetVal(b);// 对象a传递给了形参obj。GetVal()返回时，对象中的成员p所指向的堆空间被释放掉。从而实参a中的成员p所指向的堆空间即变成无效。但是，这个堆内存讲面临啊对象析构时再次释放的冲击。
    cout << endl;
    cout << GetVal(a) << " " << GetVal(b);
    return 0;
}