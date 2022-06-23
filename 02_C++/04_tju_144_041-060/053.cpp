/**
 * @file 053.cpp
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

class Base {
public:
    Base()          {a = 0;}
    Base(int i)     {a = i;}
    void print()    {cout << "a=" << a << ",";}
    int Geta()      {return a;}
    ~Base()         {cout << "Destructor Base a=" << a << endl;}
private:
    int a;
};

class Derived:public Base {
public:
    Derived()                                       {b = 0;}
    Derived(int i, int j, int k):Base(i), Ba(j)     {b = k;}
    ~Derived()                                      {cout << "Destructor Derived b = " << b << endl;}
    void print();
private:
    int b;
    Base Ba;
};

void Derived::print() {
    Base::print();
    cout << "b=" << b << ",Ba.a=" << Ba.Geta() << endl;
}

int main(int argc, char const *argv[]) {
    Derived d1, d2(5, 3, 7);
    d1.print();
    d2.print();
    return 0;
}