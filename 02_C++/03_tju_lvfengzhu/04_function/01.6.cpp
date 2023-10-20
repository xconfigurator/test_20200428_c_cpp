/**
 * @file 01.6.cpp
 * @author your name (you@domain.com)
 * @brief 分析程序运行结果
 *
 * 函数的参数是指针
 *
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int fun(int, int, int *);

int main() {
    int x, y ,z;
    fun(5, 6, &x);
    fun(7, x, &y);
    fun(x, y, &z);
    cout << x << "," << y << "," << z << endl; 
    return 0;
}

int fun(int a, int b, int *c) {
    b += a;
    *c = b - a;
}