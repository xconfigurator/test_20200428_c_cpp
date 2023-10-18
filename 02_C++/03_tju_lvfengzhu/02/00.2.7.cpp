/**
 * @file 00.2.7.cpp
 * @author your name (you@domain.com)
 * @brief  分析程序输出结果
 * 
 * sizeof和强制类型转换
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
    // 1. sizeof是静态运算符，他的结果是编译时刻就决定了。
    // 2. 不要在sizeof的括号里做运算。
    cout << "The size of a long int is :" << sizeof(long) << " bytes." << endl;// 4
    cout << "The sie of a long double is : " << sizeof(double) << " bytes." << endl;// 8
    for (int i = 48; i <= 57; i++) {
        cout << (char) i;
    }
    cout << endl;
    return 0;
}