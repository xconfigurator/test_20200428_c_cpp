/**
 * @file 00.3.5.cpp
 * @author your name (you@domain.com)
 * @brief 编写一个程序计算m的n次方
 * @version 0.1
 * @date 2023-10-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "请输入两个整型数：";
    cin >> m >> n;
    int i = 1, p = 1;
    for (int j = 1; j <= n; ++j) {
        p *= m;
    }
    cout << m << "的" << n << "次方为" << p << endl;
    return 0;
}