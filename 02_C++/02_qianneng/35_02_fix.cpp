/*
深拷贝与浅拷贝 P73

正确版本方法
1. 使用拷贝构造函数来避免这个问题。
2. 另外的方法是将GetVal()的参数设计成传引用，这样就能避免在参数传递时，调用拷贝构造函数。GetVal()返回时，引用obj的注销也不会影响到a对象对堆空间的有效控制。

最佳实践（重要）：
1. 总是提供拷贝构造函数和析构函数。
构造函数需要分配资源（如申请堆内存）的类，
一般总是要定义拷贝构造函数以便在类的通用性上更加完善，（但这并不妨碍参数传递引用的效力）。
总是要提供析构函数。
2. 传参使用引用。
传递引用避免了拷贝与构造对象所带来的的开销，同时不失可读性与安全性。
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

class MyClass {
public:
    MyClass(int i);
    MyClass(const MyClass &obj);    // copy constructor
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

// copy constructor
MyClass::MyClass(const MyClass& obj) {
    p = new int;
    if (!p) {
        cout << "Allocation error" << endl;
        exit(1);
    }
    *p = *obj.p;
}

int GetVal(MyClass obj) {
    return * obj.p;
}

int main(int argc, char const *argv[]) {
    MyClass a(1), b(2);
    cout << GetVal(a) << " " << GetVal(b);// 对象a传递给了形参obj。GetVal()返回时，对象中的成员p所指向的堆空间被释放掉。从而实参a中的成员p所指向的堆空间即变成无效。但是，这个堆内存讲面临啊对象析构时再次释放的冲击。
    cout << endl;
    cout << GetVal(a) << " " << GetVal(b);
    return 0;
}
