/**
 * @file 00.2.4.cpp
 * @author your name (you@domain.com)
 * @brief 分析程序输出结果
 * 
 8 引用做函数的参数例子
 * 
 * @version 0.1
 * @date 2023-10-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

void swap(int&, int&);

int main() {
    int x(10), y(20);
    swap(x, y);
    cout << "x=" << x << ','<< "y=" << y << endl;
    return 0;
}

void swap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}