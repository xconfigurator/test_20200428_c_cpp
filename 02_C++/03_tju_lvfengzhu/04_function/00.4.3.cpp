/**
 * @file 00.4.3.cpp
 * @author your name (you@domain.com)
 * @brief 
 *
 * 函数重载的例子
 * 编程求出一个整数的平方和一个浮点数的平方。
 *
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int square(int i) {
    return i * i;
}

double square(double d) {
    return d * d;
}

int main() {
    int a;
    double b;
    cout << "输入一个整型数和一个浮点数：";
    cin >> a >> b;
    cout << "整数" << a << "的平方值是" << square(a) << endl;
    cout << "浮点数" << b << "的平方值是" << square(b) << endl;
    return 0;
}