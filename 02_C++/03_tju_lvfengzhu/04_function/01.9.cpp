/**
 * @file 01.9.cpp
 * @author your name (you@domain.com)
 * @brief 分析程序运行结果
 * 
 * 引用传参
 * 
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

void swap(int &, int &);

int main() {
    int a(5), b(8);
    cout << "a=" << a << "," << "b=" << b << endl;
    swap(a, b);
    cout << "a=" << a << "," << "b=" << b << endl;
    return 0;
}

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}