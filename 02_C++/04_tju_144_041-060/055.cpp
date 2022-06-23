/**
 * @file 055.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

class A {
public:
    int na;
    void fun() {
        cout << "fun() of A (" << na << ")\n";
    }
};

class B:public A {
public:
    int nb;
};

class C:public A {
public:
    int nc;
};

class D: public B, public C {
public:
    int nd;
};

int main(int argc, char const *argv[]) {
    D d;
    d.B::na = 2;
    d.C::na = 3;
    cout << "d.B::A::na=" << d.B::na << "\nd.C::A::na=" << d.C::na << endl;
    d.B::fun();
    d.C::fun();
    return 0;
}