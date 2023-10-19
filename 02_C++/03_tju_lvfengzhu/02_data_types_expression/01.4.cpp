/**
 * @file 01.4.cpp
 * @author your name (you@domain.com)
 * @brief 编程实现输入公里数，输出显示其英里数。已知：1英里 = 1.60934公里，使用符号常量。
 * @version 0.1
 * @date 2023-10-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int main() {
    double m, c;
    const double A = 1.60934;
    cout << "输入公里数是：";
    cin >> m;
    c = m / A; 
    cout << "输出英里数为"<< c << endl;
    return 0;
}