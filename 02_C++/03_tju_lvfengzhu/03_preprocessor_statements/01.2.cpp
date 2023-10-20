/**
 * @file 02.2.cpp
 * @author your name (you@domain.com)
 * @brief 分析程序输出结果
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

#define MAX(a, b) (a) > (b) ? (a) : (b)

int main() {
    int m(1), n(2), p(0), q;
    q = MAX(m, n + p) * 10;
    cout << q << endl;
    return 0;
}