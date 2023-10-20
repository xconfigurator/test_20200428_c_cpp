/**
 * @file 02.5.cpp
 * @author your name (you@domain.com)
 * @brief 
 *
 * 求
 * 1! + 2! + 3! + 4! + 5! + 6! + 7! + 8! + 9! + 10! 
 *
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
// factorial
#include <iostream>
using namespace std;

long factorial(int);

int main() {
    long sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += factorial(i);
    }
    cout << "1至10自然数的阶乘之和为" << sum << endl;
    return 0;
}

long factorial(int a) {
    long p;
    if (a == 0) {
        return 1;
    } else {
        return a * factorial(a - 1);
    }
}