/*
p54
封闭类的复制构造函数

说明：
封闭类的对象，如果使用默认复制构造函数初始化的，那么它包含的成员对象也会用复制构造函数初始化。

@author liyang copy form guowei
@since 2020/12/14
*/

#include <iostream>
using namespace std;

class A {
public:
    A(){
        cout << "default" << endl;
    }
    A(A & a) {
        cout << "copy" << endl;
    }
};

class B {
    A a;
};

int main(int argc, char const *argv[]) {
    B b1;     // default
    B b2(b1); // copy b2是使用B的默认复制构造函数初始化的，所以也会使用A的复制构造函数初始化。
    return 0;
}