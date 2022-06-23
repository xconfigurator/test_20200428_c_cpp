/**
 * @file 037.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

class Point {
public:
    Point() {
        x = 0.0;
        y = 0.0;
    }
    Point(double a, double b) {
        x = a;
        y = b;
        cout << "Constructing("<< a << "," << b << ").\n";
    }
    Point(Point &p);
    double Getx() { return x; }
    double Gety() { return y; }
private:
    double x, y;
};

Point::Point(Point &p) {
    x = p.x;
    y = p.y;
    cout << "Copy constructing(" << x << ","<< y <<").\n";
}

Point pf(Point Q) {
    cout << "In function pf().\n";
    double x, y;

    x = Q.Getx() + 10;
    y = Q.Gety() + 20;
    Point R(x, y);

    return R;
}

int main(int argc, char const *argv[]) {
    Point p1(5, 7), p2;
    p2 = pf(p1);
    cout << "p2=(" << p2.Getx() << "," << p2.Gety() << ").\n";
    return 0;
}

// 注意：
// 20220623 同样一份代码在g++编译和cl编译后的运行效果不一样
// 答题时考虑以cl的结果为准。
// g++
/*
Constructing(5,7).
Copy constructing(5,7).
In function pf().
Constructing(15,27).
p2=(15,27).
*/
// cl (Visual Studio 2022)
/*
Constructing(5,7).
Copy constructing(5,7).
In function pf().
Constructing(15,27).
Copy constructing(15,27).
p2=(15,27).
*/