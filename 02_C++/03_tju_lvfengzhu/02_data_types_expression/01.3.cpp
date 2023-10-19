/**
 * @file 01.3.cpp
 * @author your name (you@domain.com)
 * @brief 输入一个摄氏温度，编程输出华氏温度。已知：华氏温度转换为摄氏温度公式如下：C = (F - 32) * 5 / 9
 * 
 * 分析： 反解的摄氏温度转华氏温度公式 f = 9.0 * c / 5.0 + 32;
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
    double C, F;
    cout << "输入摄氏温度：";
    cin >> C;
    F = 9.0 / 5.0 * C + 32;
    cout << "华氏温度为" << F << endl;
    return 0;
}