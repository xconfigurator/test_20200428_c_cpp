/**
 * @file 124.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

class Areaclass {
public:
    Areaclass(double x = 0, double y = 0) {height = x; width = y;}
protected:
    double height, width;
};

class Box:public Areaclass {
public:
    Box(double h, double w): Areaclass(h, w) {}
    double area() {return height * width;}
};

class Triangle:public Areaclass {
public:
    Triangle(double h, double w): Areaclass(h, w) {}
    double area() {return height * width * 0.5;}
};

int main(int argc, char const *argv[]) {
    Box obj1(1.5, 2.0);
    Triangle obj2(4.0, 3.0);
    cout << "Box=" << obj1.area() << endl;
    cout << "Triangle=" << obj2.area() << endl;
    return 0;
}
// 注意：输出竟然没有.0