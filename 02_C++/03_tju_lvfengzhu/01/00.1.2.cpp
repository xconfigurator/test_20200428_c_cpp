/**
 * @file 00.1.2.cpp 例1.2 编程将输入的两个整数求积后显示在屏幕上。
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-10-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int main() {
    int a1, a2;
    cout << "Enter first integer:";
    cin >> a1;
    cout << "Enter second integer:";
    cin >> a2;
    int product = a1 * a2;
    cout << "Product is " << product << endl;
    return 0;
}