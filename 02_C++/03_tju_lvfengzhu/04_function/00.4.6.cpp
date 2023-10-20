/**
 * @file 00.4.6.cpp
 * @author your name (you@domain.com)
 * @brief 
 *
 * 引用做函数参数的例子
 *
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int square1(int m) {
    return m *= m;
}

void square2(int &ref) {
    ref *= ref;
    cout << ref;
}

int main() {
    int a = 8;
    cout << square1(a) << ',' << a << endl;
    square2(a);
    cout << ',' << a << endl;
    return 0;
}