/**
 * @file 01.1.cpp
 * @author your name (you@domain.com)
 * @brief 分析程序输出结果
 *
 * static
 * 
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#define N 5

using namespace std;

void fun();

int main() {
    for (int i(1); i < N; i++) {
        fun();
    }
    return 0;
}

void fun() {
    //static int a = 0;
    static int a;// 默认初始值是几？
    int b(2);
    cout << (a += 3, a + b) << endl;
}