/**
 * @file 00.2.5.cpp
 * @author your name (you@domain.com)
 * @brief 分析程序输出结果
 * 
 * 引用作为函数返回值的例子
 * 
 * @version 0.1
 * @date 2023-10-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int &fun(int);
int a[] = {1, 2, 3, 4, 5};// Java也可以这样定义数组。

int main() {
    //cout << a[2] << endl; // 3 liuyang add 
    fun(2) = 10;
    cout << a[2] << endl;
    return 0;
}

int &fun(int x) {
    return a[x];
}