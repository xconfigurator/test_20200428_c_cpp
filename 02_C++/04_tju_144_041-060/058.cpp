/**
 * @file 058.cpp
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

class base1 {
    int i1;
public:
    void print()        {cout << "i1=" << i1 << endl;}
    base1(int i)        {i1=1; cout << "base1 constructor" << endl;}
    ~base1() {
        if (i1 != 3) {
            cout << "base1 destructor" << endl;
        } else {
            cout << "base1 (i1 = 3) destructor" << endl;
        }
    }
    int getbase1()      {return i1;}
};

class base2 {
    int i2;
public:
    void print()        {cout << "i2=" << i2 << endl;}
    base2(int i)        {i2 = i; cout << "base2 constructor" << endl;}
    ~base2()            {cout << "base2 destructor" << endl;}
};

class derived:public base1, public base2 {
    base1 b1;
    int i3;
public:
    void print();
    derived(int j1, int j2, int j3, int j4);
    ~derived() {
        cout << "derived destructor" << endl;
    }
};

derived::derived(int j1, int j2, int j3, int j4) 
:base1(j1), base2(j2), b1(j3) {
    i3 = j4;
    cout << "derived constructor" << endl;
}

void derived::print() {
    cout << "i3=" << i3 << " b1.i1=" << b1.getbase1() << endl;
    base1::print();
    base2::print();
}

int main(int argc, char const *argv[]) {
    derived d(1, 2, 3, 4);
    d.print();
    return 0;
}