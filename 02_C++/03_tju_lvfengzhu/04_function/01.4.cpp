/**
 * @file 01.4.cpp
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

void f(int n) {
    int x(5);
    static int y(10);
    if (n > 0) {
        ++x;
        ++y;
        cout << x << "," << y << endl;
    }
}

int main() {
    int m(1);
    f(m);
}