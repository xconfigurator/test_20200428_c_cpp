/**
 * @file 01.3.cpp
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
using namespace std;

void f(int j);

int main() {
    for (int i(1); i <= 4; i++) {
        f(i);
    }
    return 0;
}

void f(int j) {
    static int a(10);
    int b(1);
    b++;
    cout << a << "+" << b << "+" << j << "=" << a + b + j << endl;
    a += 10;
}