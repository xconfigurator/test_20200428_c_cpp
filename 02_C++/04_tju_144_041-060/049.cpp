/**
 * @file 049.cpp
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
public:
    X(int i) {
        a = i;
    }
    void Display() {
        cout << "a=" << a << ",y=" << y;
    }
private:
    int a;
    static int y;
};

class Y {
    X x;
    int y;
public:
    Y(int i, int j):x(i), y(j + i) {
        X::y = j - i;
    }
    void Display() {
        x.Display();
        cout << ",Y::y=" << y;
    }
};

int X::y = 1;

int main(int argc, char const *argv[]) {
    X b(12);
    b.Display(); cout << endl;

    Y c(7, 4);
    c.Display(); cout << endl;
    b.Display(); cout << endl;
    
    return 0;
}