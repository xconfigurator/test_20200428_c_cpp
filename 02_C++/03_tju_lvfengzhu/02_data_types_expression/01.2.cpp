/**
 * @file 01.2.cpp 
 * @author your name (you@domain.com)
 * @brief 从键盘上输入一个整型数和一个浮点型数比较其大小，并输出其中的大数。
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
    int a;
    double b;
    cout << "Enter int and double:";
    cin >> a >> b;
    if (a > b) {
        cout << "最大的是" << a << endl;
    } else {
        cout << "最大的是" << b << endl;
    }
    return 0;
}