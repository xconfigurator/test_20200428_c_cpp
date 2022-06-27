/**
 * @file 121.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <cmath>
using namespace std;

class Point {
    double x, y;
    friend class Line;
public:
    Point(double xx = 0, double yy = 0) {x = xx; y = yy;}
    Point(Point &p) { x = p.x; y = p.y;}
};

class Line {
    Point p1, p2;
public:
    Line(Point &a1, Point &a2):p1(a1), p2(a2) {}
    double Getdist();
};

double Line::Getdist() {
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    return sqrt(dx * dx + dy * dy);
}

int main(int argc, char const *argv[]) {
    Point ob1, ob2(4, 3);
    Line ob3(ob1, ob2);
    cout << ob3.Getdist() << endl;
    return 0;
}