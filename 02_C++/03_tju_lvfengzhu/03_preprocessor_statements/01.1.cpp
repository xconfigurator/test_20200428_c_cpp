/**
 * @file 01.1.cpp
 * @author your name (you@domain.com)
 * @brief 分析程序运行结果
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

#define M 1.5
#define A(a) M*a

int main() {
    int x(5), y(6);
    cout << A(x+y) << endl;
    return 0;
}