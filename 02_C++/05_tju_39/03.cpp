/**
 * @file 03.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-19
 * 
 * @copyright Copyright (c) 2022
 * 
 * 最大公约数和最小公倍数
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int a, b, c, m, t;
    cin >> a >> b;

    if (a < b) 
        swap(a, b);
    
    m = a * b;
    c = a % b;

    while (c) {
        a = b;
        b = c;
        c = a % b;
    }

    cout << "最大公约数：" << b << endl;
    cout << "最小公倍数：" << m / b << endl;
    
    return 0;
}