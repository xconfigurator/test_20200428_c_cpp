/**
 * @file 046.cpp
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
public:
    A(int i = 1, int j = 0):a(i), r(b) {
        c = j + r;
    }
    void print() {
        cout << "a=" << a << " ,b=" << b << " ,r=" << r << " ,c=" << c << endl;
    }
private:
    const int a;
    const static int b;
    int c;
    const int &r;
};

const int A::b = 2;

int main(int argc, char const *argv[]) {
    A a1, a2(4, 5);
    a1.print();
    a2.print();
    return 0;
}