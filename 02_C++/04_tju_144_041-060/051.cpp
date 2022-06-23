/**
 * @file 051.cpp
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
    static int count;
public:
    A() {++count;}
    ~A() {--count;}
    static int f() {return count;}
};

int A::count = 0;

int main(int argc, char const *argv[]) {
    cout << A::f() << ",";

    A a;
    cout << A::f() << ",";

    A *p = new A;
    cout << A::f() << ",";

    delete p;
    cout << A::f();
    
    cout << endl;

    return 0;
}