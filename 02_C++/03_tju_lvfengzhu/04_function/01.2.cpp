/**
 * @file 01.2.cpp
 * @author your name (you@domain.com)
 * @brief 分析程序输出结果
 *
 * extern
 *
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int add(int a, int b);
//int x(20), y(5);// 实测放到前面也可配合extern使用 20231020

int main() {
    extern int x, y;// 
    cout << add(x, y) << endl;
    return 0;
}

int x(20), y(5);// 实际定义的位置在后面
int add(int a, int b) {
   int s = a + b;
   return s;
}