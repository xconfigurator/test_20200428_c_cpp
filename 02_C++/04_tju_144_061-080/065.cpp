/**
 * @file 065.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-25
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
    void disp()     {cout << a * a << endl;}
};

class pa3:public base {
public:
    void disp()     {cout << a * a * a << endl;}
};

class pan:public base {
public:
    void disp()     {cout << pow(double(a), double(n)) << endl;}
};

int main(int argc, char const *argv[]) {
    base *pa;
    pa2 ob1;
    pa3 ob2;
    pan ob3;

    pa=&ob1;        pa->setab(10);      pa->disp();
    pa=&ob2;        pa->setab(5);       pa->disp();
    pa=&ob3;        pa->setab(5, 4);    pa->disp();
    return 0;
}