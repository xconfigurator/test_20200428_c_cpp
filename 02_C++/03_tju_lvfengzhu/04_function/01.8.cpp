/**
 * @file 01.8.cpp
 * @author your name (you@domain.com)
 * @brief 分析程序输出结果
 *
 * 递归
 * 
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

#define N 6

int f1(int a);

int main() {
    int a(N);
    cout << f1(a) << endl;
    return 0;
}

int f1(int a) {
    return (a == 0) ? 1 : a * f1(a - 1);
}