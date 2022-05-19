/**
 * 三个简单的求值计算 P1 
 * 分别输入
 * 圆柱体的半径和高，求其体积；
 * 球的半径，求其表面积；
 * 长方形的长、宽、高，求其体积。
 * 
 */
/*
实例：
请输入圆柱体的半径和高
32 44
圆柱体的体积为:141476
请输入球半径：       
30
该球的面积为：11304     
请输入长方体的长、宽、高
32 12 15
该长方体的提及为：5760
*/                             
#include <iostream>
//#include <math.h>
using namespace std;

const double M_PI = 3.14;

double cylinder(double r, double h);
double sphere(double r);
double rectangle(double l, double w, double h);

int main() {
    double volume = 0.0;

    // cylinder 
    
    double radius, height;
    cout << "请输入圆柱体的半径和高" << endl;
    cin >> radius >> height;
    volume = cylinder(radius, height);
    cout << "圆柱体的体积为:" << volume << endl;

    // sphere
    cout << "请输入球半径：" << endl;
    cin >> radius;
    double areaOfSphere = sphere(radius);
    cout << "该球的面积为：" << areaOfSphere << endl; 

    // rectangle
    double length, width;
    cout << "请输入长方体的长、宽、高" << endl;
    cin >> length >> width >> height;
    volume = rectangle(length, width, height);
    cout << "该长方体的提及为：" << volume << endl;

    return 0;
}

double cylinder(double r, double h) {
    return M_PI * r * r * h;
}

double sphere(double r) {
    return M_PI * r * r * 4;
}

double rectangle(double l, double w, double h) {
    return l * w * h;
}
