/**
 * 题目：P1 分别输入
 * 圆柱体的半径和高，求其体积；
 * 球的半径，求其表面积；
 * 长方形的长、宽、高，求其体积。
 */                             
#include <iostream>
#include <math.h>
using namespace std;

double cylinder(double r, double h);
double sphere(double r);
double rectangle(double l, double w, double h);

int main() {

    return 0;
}

double cylinder(double r, double h) {
    return M_PI * r * r * h;
}

double sphere() {
    return 0.0;
}