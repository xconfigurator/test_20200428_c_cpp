/**
 * @file 128.cpp
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
public:
    virtual void disp() {cout << "A" << endl;}
};

class B:public A {
    void disp() {cout << "B" << endl;}
};

void p1(A &a1) { a1.disp();}
void p2(A a2) {a2.disp();}

int main(int argc, char const *argv[]) {
    B b;
    p1(b);
    p2(b);
    return 0;
}