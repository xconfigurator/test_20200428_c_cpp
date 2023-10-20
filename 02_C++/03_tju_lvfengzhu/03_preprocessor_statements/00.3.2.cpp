/**
 * @file 00.3.2.cpp
 * @author your name (you@domain.com)
 * @brief 说明下面程序的作用是什么
 * @version 0.1
 * @date 2023-10-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int main() {
    int i, j;
    cout << "请输入两个1至10的整形数据：";
    cin >> i >> j;
    for (int a = 0; a < i; ++a) {
        for (int b = 0; b < j; ++b) {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}