/**
 * @file 127.cpp
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

class Base {
public:
    virtual void fun(int x) {cout << "Base class x=" << x << endl;}
};

class subclass:public Base {
public:
    virtual void fun(int x) {cout << "subclass x=" << x << endl;}
};

void Test(Base *p) {
    int a = 2;
    p->fun(a);
}

int main(int argc, char const *argv[]) {
    Base obj1;
    subclass obj2;
    Test(&obj1);
    Test(&obj2);
    return 0;
}