/**
 * @file 090.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int sub(int x, int &y, int *z) {
    int t = y;
    y = x > y ? x : y;
    if (y < *z) {
        y = *z;
    }
    x = x + t + *z;
    *z = x / 3;
    return x;
}

int main(int argc, char const *argv[]) {
    int a = 12, b = 9, c = 25, s, *pa = &c;
    s = sub(a, b, pa);
    cout << s << " " << a << " " << b << " " << c << endl;
    return 0;
}

// 传值和运算