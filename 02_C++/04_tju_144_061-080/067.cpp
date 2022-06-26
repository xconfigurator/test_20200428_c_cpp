/**
 * @file 067.cpp
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
    int a = -1, b = 3, k1, k2;
    k1 = (a++ <= 0) && (!(b-- <= 0));
    k2 = (--a < 0) && (!(b-- <= 0));
    cout << a << b << k1 << k2 << endl;
    return 0;
}