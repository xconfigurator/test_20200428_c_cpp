/**
 * @file 048.cpp
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

class A {
    double d;
public:
    A(double i = 0) {d = i;}
    void Print() {
        cout << "Constructor" << d << endl;
        cout << "d=" << d << endl;
    }
    ~A() {
        cout << "Destructor" << d << endl;
    }
};

int main(int argc, char const * argv[]) {
    A a;
    a = 3.693;
    a.Print();
    return 0;
}