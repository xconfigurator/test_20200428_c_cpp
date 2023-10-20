/**
 * @file 00.4.4.cpp
 * @author your name (you@domain.com)
 * @brief 
 *
 * 函数的默认参数例子
 * 
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int fun(int a, int b = 2, int c = 5);// 默认值在声明处必须要写

int main() {
    cout << fun(5) << endl;
    cout << fun(5, 10) << endl;
    cout << fun(5, 10, 20) << endl;
    return 0;
}

//int fun(int a, int b = 2, int c = 5) {// 注意在定义处不需要写, 写了就错！
int fun(int a, int b, int c) { 
    return a + b + c;
}