/**
 * @file 073.cpp
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
    int a, b, c, k;
    a = 1; b = 2; c = 3;

    k = --a || ++b && c++;
    cout << a << b << c << k << endl;

    k = ++a && b || --c;
    cout << a << b << c << k << endl;
    return 0;
}
// 注意短路或 