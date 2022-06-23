/**
 * @file 003.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int a, b, c, x, y;
    a = 1;
    b = 2;
    c = 0;

    cout << a++ - 1 << endl;
    cout << (a && b || !c) << endl;
    cout << b / ++a << endl;
    //cout << 2 / 3 << endl;
    
    x = ++a || ++b && ++c;
    cout << a << b << c << x << endl;

    a = b = c = -1;
    y = ++a && ++b && ++c;
    cout << a << b << c << y << endl;

    return 0;
}