/**
 * @file 129.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <cmath>
using namespace std;

class base {
protected:
    int a, n;
public:
    virtual void setab(int i, int j = 0) {a = i; n = j;}
    virtual void disp() = 0;
};

class pa2:public base {
public:
    void disp() { cout << a * a << endl; }
};

class pa3:public base {
public:
    void disp() { cout << a * a * a << endl;}
};

class pan:public base {
public:
    void disp() { cout << pow(a, n) << endl;}
};

void f1(base *pa, int n) {
    pa->setab(n);
    pa->disp();
}

int main(int argc, char const *argv[]) {
    pa2 ob1;
    pa3 ob2;
    pan ob3;
    f1(&ob1, 10);
    f1(&ob2, 5);
    ob3.setab(2, 5);
    ob3.disp();
    return 0;
}