/**
 * @file 009.cpp
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
    int x, a, b, c, d;
    a = b = c = d = 0;
    cin >> x;

    switch(x) {
        case 1:
            a++;
        case 2:
            b++;
        case 3:
            c++;
            break;
        default:
            d = 1;
        case 0:
            ;
    }
    cout << a << b << c << d << endl;

    // 1. 输入1
    // 2. 输入2
    // 3. 输入5
    // 4. 输入0

    return 0;
}