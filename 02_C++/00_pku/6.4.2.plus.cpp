/*
郭炜PPT上的示例 视频16:00 左右
https://www.bilibili.com/video/BV1ob411q7vb?p=30

说明：
在构造函数和析构函数中调用虚函数，不是多态。编译时即可确定，调用的函数是自己的类或基类中定义的函数，
不会等到运行时才决定调用自己还是派生类的函数。(编译器就是这样设计的。为什么这样设计，在视频20:20左右，类似“死锁”。)

输出：
hello from son
constructing grandson
hello from grandson
destructing grandson
bye from myclass

@author liyang copy form guowei
@since 2020/12/14
*/

#include <iostream>
using namespace std;

class myclass {
public:
    virtual void hello() {
        cout << "hello from myclass" << endl;
    }
    virtual void bye() {
        cout << "bye from myclass" << endl;
    }
};

class son:public myclass {
public:
    void hello() {
        // 派生类中和基类中虚函数名同名同参数表的函数，不加virtual也自动成为虚函数。
        cout << "hello from son" << endl;
    }
    son() {
        hello(); // 不是虚函数
    }
    ~son() {
        bye(); //  本类没有实现则找父类
    }
};

class grandson:public son {
public:
    void hello() {
        cout << "hello from grandson" << endl;
    }
    void bye() {
        cout << "bye from grandson" << endl;
    }
    grandson() {
        cout << "constructing grandson" << endl;
    }
    ~grandson() {
        cout << "destructing grandson" << endl;
    }
};

// int main(int argc, char const *argv[]) {
int main(int argc, char const *argv[]) {
    grandson gson;
    son *pson;
    pson = &gson;
    pson->hello();//  多态
    return 0;
}