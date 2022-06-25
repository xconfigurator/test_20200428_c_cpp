/**
 * @file 064.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-25
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
//private: // 20220625 实测，加上private也是同样的运行结果。C++果然比较令人费解。想不通就先记住算了。
    virtual void fun(int x) {cout << "subclass class x=" << x << endl;} 
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