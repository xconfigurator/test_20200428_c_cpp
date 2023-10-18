/**
 * @file 00.2.8.cpp 
 * @author your name (you@domain.com)
 * @brief 分析程序输出结果
 * 
 * 常量、++、--
 * 
 * @version 0.1
 * @date 2023-10-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int main() {
    const int M = 3;
    int const N = 5;
    cout << "M * N = " << M * N << endl;
    int i = 10;
    cout << i++ << ',' << i << endl;
    cout << --i << ',' << i << endl;
    //cout << M+++N-- << endl; // 错误
    return 0;
}