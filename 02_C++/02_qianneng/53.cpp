/*
设计虚函数 P119

liuyang:要求比较无聊，看程序写输出即可。

给定基类：
class Base {
public:
    virtual void Iam() { cout << "Base \n"; }
}
1. 请从Base类派生两个新类，每个类定义Iam()来打印出自己类的名字。
2. 创建出这些类的对象，分别调用Iam();
3. 将这些类对象的地址传给以Base *作为参数的函数，通过该指针来调用Iam()。
*/
#include <iostream>
using namespace std;

class Base {
public:
    virtual void Iam() { cout << "Base" << endl; }
};

class NewClass1 : public Base {
public:
    void Iam() { cout << "NewClass1" << endl; }
};

class NewClass2 : public Base {
public:
    void Iam() { cout << "NewClass2" << endl; }
};

void fn(Base& b) {
    b.Iam();
}

void fn(Base* bp) {
    bp->Iam();
}

int main(int argc, char const *argv[]) {
    Base a;
    NewClass1 b;
    NewClass2 c;

    // 通过引用
    fn(a);
    fn(b);
    fn(c);

    // 通过指针
    fn(&a);
    fn(&b);
    fn(&c);

    return 0;
}