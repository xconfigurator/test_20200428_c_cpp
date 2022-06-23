/**
 * @file 044.cpp
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

class X {
friend class Y;
    int x;
    static int y;
public:
    void set(int i) {
        x = i;
        y += x;
    }
    void Display() {
        cout << "x=" << x << ",y=" << y << endl;
    }
};

class Y {
    int yy;
public:
    Y(int i, X &a) {
        yy = i;
        a.x = a.x * i;
    }
    void Display(X &a) {
        cout << "x=" << a.x << ",y=" << X::y << ",yy=" << yy << endl;
    }
};

int X::y = 1;

int main(int argc, char const *argv[]) {
    X obx;
    obx.set(5);
    obx.Display();

    Y oby(8, obx);
    obx.Display();

    obx.set(9);
    oby.Display(obx);
    return 0;
}