/**
 * @file 056.cpp
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
    int x;
public:
    A(int x1) {x = x1;}
    void print() {
        cout << "x=" << x << " ";
    }
};

class B:public A {
    int y;
public:
    B(int x1, int y1):A(x1) {y = y1;}
    void print() {
        A::print();
        cout << "y=" << y << " ";
    }
};

int main(int argc, char const *argv[]) {
    B b1(10, 20);   b1.print();
    A a(b1);        a.print();
    cout << endl;

    B b2(10, 30);   b2.print();
    A &ra = b2;     ra.print();
    cout << endl;

    B b3(10, 40);   b3.print();
    a = b3;         a.print();
    cout << endl;
    return 0;
}