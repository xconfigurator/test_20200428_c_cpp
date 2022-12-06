/**
 * @file static01_202212061604.cpp
 * @author your name (you@domain.com)
 * @brief 演示静态变量
 * @version 0.1
 * @date 2022-12-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

void f1() {
    int a = 0;
    ++a;
    cout << a << endl; 
}

void f2() {
    static int b = 0;// 函数f2的静态变量b。其他函数看不到这个b，这个b仅属于f2。
    ++b;
    cout << b << endl;
}

int main(int argc, char const *argv[]) {

    for (int i = 0; i < 5; ++i) {
        f1();
    }

    cout << "######################" << endl;

    for (int i = 0; i < 5; ++i) {
        f2();
    }

    return 0;
}