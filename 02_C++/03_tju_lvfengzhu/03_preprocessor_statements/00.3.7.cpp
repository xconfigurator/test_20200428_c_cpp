/**
 * @file 00.3.7.cpp
 * @author your name (you@domain.com)
 * @brief 
 *
 * 变成说明break和continue的使用方法
 * 
 * @version 0.1
 * @date 2023-10-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 8; ++i) {
        if (i == 3) break;
        cout << i << ' ';
    }
    cout << endl;
    for (int j = 1; j <= 8; ++j) {
        if (j == 3) continue;
        cout << j << ' ';
    }
    cout << endl;
    return 0;
}