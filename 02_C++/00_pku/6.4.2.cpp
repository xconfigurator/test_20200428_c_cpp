/*
p120 视频16:00 左右开始讲了一个类似的例子。详细参见6.4.2.plus.cpp
构造函数和析构函数中调用虚函数

结论：
在构造函数和析构函数中调用虚函数，不是多态。编译时即可确定，调用的函数是自己的类或基类中定义的函数，
不会等到运行时才决定调用自己还是派生类的函数。(编译器就是这样设计的)

输出:
B::hello
A::bye

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
    virtual void hello() {// 派生类中和基类中虚函数同名同参数表的函数，不加virtual也自动成为虚函数
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
    virtual void hello() {// 派生类中和基类中虚函数同名同参数表的函数，不加vritual也自动成为虚函数
        cout << "C::hello" << endl;
    }
};

// int main(int argc, char const *argv[]) {
int main(int argc, char const *argv[])  {
    C obj;
    return 0;
}