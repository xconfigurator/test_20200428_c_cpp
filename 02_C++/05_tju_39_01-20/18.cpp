/**
 * @file 18.cpp 计算两点间的距离
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*
Problem Description

Input
    输入两点坐标(x1, y1)，(x2, y2)，计算并输出两点之间的距离
Output
    输入数据有多组，每组占一行，由4个实数组成，分别表示x1, y1, x2, y2，数据之间用空格隔开。
Sample Input
0 0 0 1
0 1 1 0

Sample Output
1.00
1.41
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[]) {
    double a, b, c, d;
    while (cin >> a >> b >> c >> d) {
        double n = sqrt((c - a) * (c - a) + (d - b) * (d - b));
        cout << setiosflags(ios::fixed) << setprecision(2) << n << endl;
    }
    return 0;
}