/**
 * @file 02.4.cpp
 * @author your name (you@domain.com)
 * @brief 
 *
 * 求系列分数序列的前15项之和。
 * 2/1, 3/2, 5/3, 8/5, 13/8, 21/13, ...
 * 
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int main() {
    double a = 2, b = 1, sum = 0, t;
    for (int i = 1; i <= 15; i++) {
        sum += a / b;
        t = a + b;
        b = a;
        a = t;        
    }
    cout << "SUM = " << sum << endl;
    return 0;
}