/**
 * @file 00.3.1.cpp
 * @author your name (you@domain.com)
 * @brief 分析程序输出 结果
 * @version 0.1
 * @date 2023-10-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int main() {
    int a = 9, b;
    while (a >= 3) {
        b = 1;
        while (b <= 5) {
            cout << (a % 3 ? '#' : '*');
            b++;
        }
        a--;
        cout << endl;
    }
    return 0;
}