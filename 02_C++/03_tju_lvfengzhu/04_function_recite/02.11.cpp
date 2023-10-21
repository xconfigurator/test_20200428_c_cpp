/**
 * @file 02.11.cpp
 * @author your name (you@domain.com)
 * @brief 
 *
 * 题目要求见P109
 * 
 * @version 0.1
 * @date 2023-10-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int fun(int n = 2);// 演示一下默认参数
int mypow(int, int);// x的y次方

int main() {
    cout << fun(1) << endl;
    cout << fun() << endl;
    cout << fun(3) << endl;
    return 0;
}

int fun(int n) {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += mypow(n, i);
    }
    return sum;
}

int mypow(int n, int y) {
    int result = 1;
    for (int i = 1; i <= y; i++) {
        result *= n;
    }
    return result;
}