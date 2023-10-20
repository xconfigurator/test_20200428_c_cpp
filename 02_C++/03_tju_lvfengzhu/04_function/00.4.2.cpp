/**
 * @file 00.4.2.cpp
 * @author your name (you@domain.com)
 * @brief 
 *
 * 内联函数的例子
 * 编程求一个浮点数的平方。要求求平方的函数为内联函数。
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

inline double square(double);

int main() {
    double d;
    cout << "输入一个浮点数：";
    cin >> d;
    cout << "浮点数" << d << "的平方值为" << square(d) << endl;
    return 0;
}

inline double square(double a) {
    return a * a;
}