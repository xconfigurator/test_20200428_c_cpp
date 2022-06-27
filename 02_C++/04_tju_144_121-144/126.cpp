/**
 * @file 126.cpp
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
    Base()          {a = 1; cout << "Default constructor Base " << a << endl;}
    Base(int i)     {a = i; cout << "Constructor Base " << a << endl;}
    void print()    {cout << "a=" << a << endl;}
    ~Base()         {cout << "Destructor Base " << a << endl;}
private:
    int a;
};

class Derived:public Base {
public:
    Derived()       {b = 2; cout << "Default constructor Derived " << b << endl;}
    Derived(int i, int k);
    void print();
    ~Derived()      {cout << "Destructor Derived " << b << endl;}
private:
    int b;
};

Derived::Derived(int i, int k):Base(i) {
    b = k;
    cout << "Constructor Derived " << b << endl;
}

void Derived::print() {
    Base::print();
    cout << "b=" << b << endl;
}

int main(int argc, char const *argv[]) {
    Derived d1, d2(50, 42);
    d1.print();
    d2.print();
    return 0;
}