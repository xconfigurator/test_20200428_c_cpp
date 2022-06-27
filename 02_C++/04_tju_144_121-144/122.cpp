/**
 * @file 122.cpp
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
    void set_i(int x)   {i = x;}
    int get_i()         {return i;}
protected:
    int i;
};

class Derived: private Base {
public:
    Base::set_i;
    void set_j(int x)   {j = x;}
    int get_ij()        {return (j--) * (++i);}
protected:
    int j;
};

int main(int argc, char const *argv[]) {
    Derived obj;
    obj.set_i(8);
    obj.set_j(7);
    cout << obj.get_ij() << endl;
    return 0;
}