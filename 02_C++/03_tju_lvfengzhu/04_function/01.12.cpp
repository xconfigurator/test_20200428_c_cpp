/**
 * @file 01.12.cpp
 * @author your name (you@domain.com)
 * @brief 分析程序输出结果
 * 
 * 函数重载
 * 
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

void ff(int), ff(double);

int main() {
    double a(88.18);
    ff(a);
    char b('a');
    ff(b);// a:97 A:65
    return 0;
}

void ff(int x) {
    cout << "ff(int):" << x << endl;
}

void ff(double x) {
    cout << "ff(double):" << x << endl;
}