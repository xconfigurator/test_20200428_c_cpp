/**
 * @file 02.1.cpp
 * @author your name (you@domain.com)
 * @brief 
 *
 * 从键盘上输入15个浮点数，求初期和及平均值。要求写出求和及平均值的函数。
 * 
 * 输入：
 * 1.0 2.0 3.0 4.0 5.0 6.0 7.0 8.0 9.0 10 11 12 13 14 15
 * 
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

double s, sum(double b[], int n), average(int n);

int main() {
    double a[15];
    cout << "Input 15 doubles:";
    for (int i = 0; i < 15; i++) {
        cin >> a[i];
    }
    s = sum(a, 15);
    double ave = average(15);
    cout << "SUM=" << s << ',' << "AVERAGE=" << ave << endl;
    return 0;
}

double sum(double b[], int n) {
    double sum = 0;
    for (int i = 0; i < 15; i++) {
        sum += b[i];
    }
    return sum;
}

double average(int n) {
    return s / n;
}