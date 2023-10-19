/**
 * @file 01.5.cpp
 * @author your name (you@domain.com)
 * @brief 输入一个 int型数，将它的低4位（右4位）都置为1。
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
    cout << "输入一个整型数：";
    cin >> a;
    b = a | 0x0f;// 关键一步
    cout << dec << b << '\n' << hex << b << '\n' << (b & 0x0f) << endl;
    // oct dec hex boolalpha
    return 0;
}