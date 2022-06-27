/**
 * @file 123.cpp
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
    A(int a) {
        cout << "Constructing A.\n";
        x = a;
    }
    int getx() { return x; }
};

class B {
    int y;
public:
    B(int a) {
        cout << "Constructing B.\n";
        y = a;
    }
    int gety() { return y; }
};

class C:public B, public A {// B -> A -> C
//class C:public A, public B {// A -> B -> C // 202206161428 实测
    int z;
public:
    C(int a, int b, int c):A(a), B(b) {
        cout << "Constructing C.\n";
        z = c;
    }
    int getxyz() {
        return getx() * gety() * z;
    }
};

int main(int argc, char const *argv[]) {
    C obj(4, 5, 6);
    cout << obj.getxyz() << endl;
    return 0;
}