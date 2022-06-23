/**
 * @file 039.cpp
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

int a = 10;
void f() { cout << --a << endl; }

struct S {
    int a;
    void f();
};

void S::f() {
    cout << a << endl;
    a = 20;
    ::f();
    ::a++;
    a--;
    cout << a << endl;
}

int main(int argc, char const *argv[]) {
    S s;
    s.a = 15;
    f();
    s.f();
    return 0;
}