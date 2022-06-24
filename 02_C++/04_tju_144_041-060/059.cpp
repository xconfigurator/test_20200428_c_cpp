/**
 * @file 059.cpp
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

class Base {
public:
    void set_i(int x)       {i=x; cout << "Constructing Base" << x << endl;}
    int get_i()             {return i;}
    ~Base()                 {cout << "Destructing Base " << i << endl;}
protected:
    int i;
};

class Derived:Base {
public:
    Base::set_i;
    void set_j(int x)       {j = x; cout << "Constructing Derived " << x << endl;}
    int get_ij()            {return (j--) * (++i);}
    ~Derived()              {cout << "Destructing Derived " << j << endl;}
protected:
    int j;
};

int main() {
    Derived obj;
    obj.set_i(5);
    obj.set_j(7);
    cout << obj.get_ij() << endl;
}