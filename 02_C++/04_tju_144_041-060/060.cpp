/**
 * @file 060.cpp
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

class B1 {
public:
    B1(int i):b1(i)         {cout << "constructor B1." << i << endl;}
    void print()            {cout << b1 << endl;}
private:
    int b1;
};

class B2 {
public:
    B2(int i):b2(i)         {cout << "constructor B2." << i << endl;}
    void print()            {cout << b2 << endl;}
private:
    int b2;
};

class B3 {
public:
    B3(int i):b3(i)         {cout << "constructor B3." << i << endl;}
    int getb3()             {return b3;}
private:
    int b3;
};

class A:public B2, public B1 {
public:
    A(int i, int j, int k, int l):B1(i), B2(j), bb(k) {
        a = l;
        cout << "constructor A." << l << endl;
    }
    void print() {
        B1::print();
        B2::print();
        cout << a << "," << bb.getb3() << endl;
    }
private:
    int a;
    B3 bb;
};

int main(int argc, char const *argv[]) {
    A aa(1, 2, 3, 4);
    aa.print();
    return 0;
}