/**
 * @file 071.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int a, b, c;
    a = 1; b = 2; c = 3;

    c += a + b + 4;
    cout << a << " " << b << " " << c << endl;

    c = (a++, a += b, a + b);
    cout << a << " " << b << " " << c << endl;
    return 0;
}