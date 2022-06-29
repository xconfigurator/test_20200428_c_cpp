/**
 * @file 19.cpp 计算球体积
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyrigcht Copyright (c) 2022
 * 
 */
/*
Problem Description:
根据输入的半径值，计算球的体积

Input:
输入数据有多组，每组占一行，每行包括一个实数，表示球的半径。

Output:
输出对应的球的体积，对于每组输入数据，输出一行计算结果保留三位小数。

Sample Input:
1
1.5

Sample Output:
4.189
14.137
*/
#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.1415927
using namespace std;

int main(int argc, char const *argv[]) {
    double a, s;
    while (cin >> a) {
        s = (4 / 3.0) * PI * pow(a, 3);
        cout << setiosflags(ios::fixed) << setprecision(3) << s << endl; 
    }
    return 0;
}