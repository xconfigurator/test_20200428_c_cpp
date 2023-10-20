/**
 * @file 00.4.7.cpp
 * @author your name (you@domain.com)
 * @brief 
 *
 * 引用作为函数返回值的例子
 *
 * 
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int &fun(int&);
int n = 5;

int main() {
    int b = 7;
    cout << fun(b) << endl;
    fun(b) = 9;
    cout << n << endl;
    return 0;
}

int &fun(int &a) {
    n = a + 5;// 注意n是一个全局变量
    return n;
}