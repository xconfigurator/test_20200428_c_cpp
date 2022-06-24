/**
 * @file 057.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

class A {
private:
    int a;
public:
    A()             {a = 0; cout << "A's default constructor called." << endl;}
    A(int i)        {a = i; cout << "A's constructor called." << endl;}
    void print()    {cout << a << ",";}
    ~A()            {cout << "A's destructor called." << endl;}
    int Geta()      {return a;}
};

class B:public A {
public:
    B()             {b = 0; cout << "B's default constructor called." << endl;}
    B(int i, int j, int k);
    void print()    {A::print(); cout << b << "," << aa.Geta() << endl;}
    ~B()            {cout << "B's destructor called." << endl;} 
private:
    int b;
    A aa;
};

B::B(int i, int j, int k):A(i), aa(j) {
    b = k;
    cout << "B's constructor called." << endl;
}

int main() {
    B bb[2] = {B(1, 2, 5), B(3, 4, 7)};

    for (int i = 0; i < 2; i++) {
        bb[i].print();
    }
    return 0;
}