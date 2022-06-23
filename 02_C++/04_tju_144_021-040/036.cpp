/**
 * @file 036.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <cmath>
using namespace std;

class Point {
    double x, y;
public:
    Point(double a = 0, double b = 0) {
        x = a;
        y = b;
        cout << "Constructor Point(" << x << "," << y <<").\n";
    }
    void Print() {
        cout << "Point(" << x << "," << y << ")";
    }
    double Distance(Point &pr) {
        double dx = x - pr.x;
        double dy = y - pr.y;
        return sqrt(dx * dx + dy * dy);
    }
    ~Point() {
        cout << "Destructor Point("<< x << "," << y << "). \n";
    }
};

int main(int argc, char const *argv[]) {
    Point *ob, ob1, ob2(3, 4);
    ob = &ob2;
    cout << "The distance between ";
    ob1.Print();
    cout << " end ";
    ob2.Print();
    cout << " is " << ob1.Distance(ob2) << endl;
    return 0;
}