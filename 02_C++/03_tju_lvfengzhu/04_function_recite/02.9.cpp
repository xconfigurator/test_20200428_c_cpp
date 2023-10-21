/**
 * @file 02.9.cpp
 * @author your name (you@domain.com)
 * @brief 
 *
 * 平面上两点之间的距离。
 * 使用函数重载，分别计算整型和浮点型的情况。
 * 
 * @version 0.1
 * @date 2023-10-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <math.h>
using namespace std;

double distance(int, int, int, int);
double distance(double, double, double, double);

int main() {
    int x1 = 5, y1 = 8, x2 = 12, y2 = 15;
    double xd1 = 1.5, yd1 = 5.2, xd2 = 3.7, yd2 = 4.6;

    cout << "两个int型数的点间距离：" << distance(x1, y1, x2, y2) << endl;
    cout << "两个double型数的点间距离：" << distance(xd1, yd1, xd2, yd2) << endl;

    return 0;
}

double distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}