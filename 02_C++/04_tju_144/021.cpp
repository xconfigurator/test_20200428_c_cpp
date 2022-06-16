/**
 * @file 021.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int &f1(int &a1);
int f2(int a2);

int main() {
    int x = 2;
    int b1 = f1(x);
    int b2 = f2(x);

    cout << b1 << endl;
    cout << b2 << endl;
    cout << x << endl;
    return 0;
}

int &f1(int &a1) {
    a1 += a1;
    return a1;
}

int f2(int a2) {
    a2 += a2;
    return a2;
}
