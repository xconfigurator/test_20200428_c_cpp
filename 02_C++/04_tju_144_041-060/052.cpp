/**
 * @file 052.cpp
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
    A(int a, int b):x(a), y(b) {}
    void print() {
        cout << "x=" << x << ",y=" << y << endl;
    }
    int y;
private:
    int x;
};

class B:private A {
public:
    B(int a, int b, int c): A(a, b), z(c) {}
    void display() {
        cout << "z=" << z << ",";
    }
    A::print;
    A::y;
private:
    int z;
};

int main() {
    B b(5, 10, 20);
    b.y = 8;
    
    b.display();
    b.print();
    return 0;
}