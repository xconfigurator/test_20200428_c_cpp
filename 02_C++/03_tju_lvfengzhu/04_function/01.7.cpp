/**
 * @file 01.7.cpp
 * @author your name (you@domain.com)
 * @brief 分析程序运行结果
 * 
 * 函数默认参数
 * 
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int add(int x, int y = 8);

int main() {
    int a(5);
    cout << "sum1 = " << add(a) << endl;
    cout << "sum2 = " << add(a, add(a)) << endl;
    cout << "sum3 = " << add(a, add(a, add(a))) << endl;
    return 0;
}

int add(int x, int y) {
    return x + y;
}