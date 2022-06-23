/**
 * @file 031.cpp
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

void sub(int x, int y, int &z) {
    z = y * x;
}

int main(int argc, char const *argv[]) {
    int a, b, c;
    sub(10, 5, a);
    sub(8, a, b);
    sub(a, b, c);

    cout << a << " " << b << " " << c << endl;
    return 0;
}