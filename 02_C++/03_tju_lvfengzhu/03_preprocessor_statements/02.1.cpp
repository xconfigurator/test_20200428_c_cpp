/**
 * @file 02.1.cpp
 * @author your name (you@domain.com)
 * @brief 
 * 
 * 求100之内的自然数中奇数之和。
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
    int sum = 0;
    for (int i = 1; i <= 100; i += 2) {
        sum += i;
    }
    cout << "Sum=" << sum << endl;
    return 0;
}