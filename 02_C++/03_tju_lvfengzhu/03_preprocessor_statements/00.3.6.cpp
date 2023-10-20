/**
 * @file 00.3.6.cpp
 * @author your name (you@domain.com)
 * @brief 
 * 
 * 公式：a = p * pow((1.0 + r * (1.0 - q)), n)
 * a表示年终本利总金额
 * p表示本金
 * r表示年利率
 * q表示利息税
 * n表示年数
 * 计算5年间每年年终本利总金额。
 * 
 * @version 0.1
 * @date 2023-10-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    const double r = 0.023;  // 利率
    const double q = 0.20;   // 利息税
    double p = 10000.0;     // 本金
    double a;
    cout << "Year" << setw(10) << "Amount" << endl;
    for (int year = 1; year <= 5; year++) {
        a = p * pow(1.0 + r * (1.0 - q), year);
        cout << setw(2) << year
             << setiosflags(ios::fixed | ios::showpoint) << setw(13) << setprecision(2) << a << endl;
    }
    return 0;
}