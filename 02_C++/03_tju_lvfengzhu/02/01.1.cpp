/**
 * @file 01.1.cpp
 * @author your name (you@domain.com)
 * @brief 从键盘上输入两个整型数，比较其大小，并输出显示其中小的整数。
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
    int a, b;
    cout << "Enter tow integers:";
    cin >> a >> b;
    if (a < b) {
        cout << "最小的是" << a << endl;
    } else {
        cout << "最小的是" << b << endl;
    }
    return 0;
}