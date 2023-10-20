/**
 * @file 02.9.cpp
 * @author your name (you@domain.com)
 * @brief 
 * 
 * 一元二次方程球根, 具体要求见p76
 * 
 * 输入：
 * 0 8 6
 * 1 2 1
 * 2 5 3
 * 2 3 4
 * 
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double a, b, c, x1, x2, delta;
    cout << "输入方程的3个系数a, b, c:" ;
    cin >> a >> b >> c;
    delta = b * b - 4 * a * c;

    if (fabs(a) <= 1e-6) {// a == 0
        cout << "不是二次方程" << endl;
    } else if ((abs((int) delta)) <= 1e-6) {// delta == 0
        x1 = x2 = -b / (2 * a);
        cout << "方程有两个相等实根：" << x1 << endl;
    } else if (delta > 1e-6) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "方程有两个不等的实根：" << x1 << "和" << x2 << endl;
    } else {
        double r = -b /(2 * a);
        double i = sqrt(-delta) / (2 * a);
        cout << "方程有两个共轭复根：" << endl;
        cout << r << "+" << i << "i\n";
        cout << r << "-" << i << "i\n";
    }
    return 0;
}