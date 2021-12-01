/*
p119 视频 13:07 开始讲了一个类似的例子。

结论：
在非构造函数，非析构函数的成员函数中调用虚函数，是多态。

输出：
CDerived:func2()
*/
#include <iostream>
using namespace std;

class CBase {
public:
    void func1() {
        func2();// 写成this->func2(); 就好理解了。
    }
    virtual void func2() {
        cout << "CBase::func2" << endl;
    }
};

class CDerived: public CBase {
public:
    virtual void func2() {
        cout << "CDerived:func2()" << endl;
    }
};

int main(int argc, char const *argv[]) {
    CDerived d;
    d.func1();
    return 0;
}