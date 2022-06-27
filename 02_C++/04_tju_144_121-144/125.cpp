/**
 * @file 125.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

class A {
    int x;
public:
    A(int xx = 0):x(xx)     {cout << "A constructor.\n";}
    ~A()                    {cout << "A destructor.\n";}
    void output()           {cout << x << " ";}
    int Getx()              {return x;}
};

class B {
    int y;
    A a;
public:
    B(int xx = 0, int yy = 0):a(xx), y(yy)  {cout << "B constructor.\n";}
    ~B()                                    {cout << "B destructor.\n";}
    int Gety()                              {return y;}
    int Geta()                              {return a.Getx();}
};

class C: public A, virtual public B {// 先执行虚继承（解析是对的）
public:
    C(int x = 0, int y = 0):A(x), B(x, y)   {cout << "C constructor.\n";}
    void output() {
        A::output();
        cout << Getx() << " " << Gety() << " " << Geta() << endl;
    }
    ~C() {
        cout << "C destructor.\n";
    }
};

int main(int argc, char const *argv[]) {
    C aa(4, 8);
    aa.output();
    return 0;
}

// 虚继承