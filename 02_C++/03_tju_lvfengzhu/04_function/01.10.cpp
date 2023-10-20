/**
 * @file 01.10.cpp
 * @author your name (you@domain.com)
 * @brief 分析程序运行结果
 * 
 * 引用做返回值
 *
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;
int &f1(int n, int s[]) {
    // 写法1
    /*
    int &m = s[n];
    return m;
    */

    // 写法2 liuyang 
    return s[n];
}

int main() {
    int s[] = {5, 4, 3, 2, 1, 0};
    f1(3, s) = 10;
    cout << f1(3, s) << endl;
    return 0;
}