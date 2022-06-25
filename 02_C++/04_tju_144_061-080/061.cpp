/**
 * @file 061.cpp
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

class A {
public:
    A(int i, int j)         {a = i; b = j;}
    void Move(int x, int y) {a += x; b += y;}
    void Show()             {cout << "(" << a << "," << b << ").\n";}
private:
    int a, b;
};

class B:public A {
public:
    B(int i, int j, int k, int l):A(i, j), x(k), y(l) {}
    void Show()             {cout << x << "," << y << endl;}
    void fun()              {Move(3, 5);}
    void f1()               {A::Show();}
private:
    int x, y;
};

int main(int argc, char const *argv[]) {
    A e(1, 2);
    e.Show();

    B d(3, 4, 5, 6);
    d.fun();

    d.A::Show();
    d.B::Show();
    d.f1();
    return 0;
}