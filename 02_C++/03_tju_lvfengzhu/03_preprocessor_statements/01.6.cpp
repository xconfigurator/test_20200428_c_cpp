/**
 * @file 02.6.cpp
 * @author your name (you@domain.com)
 * @brief 分析程序输出结果
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int main() {
    int i(1), j(2), k(3), a(10);
    if (!i) {
        a--;
    } else if (j) {
        if (k) {
            a = 5;
        }
    } else {
        a = 6;
    }
    a++;
    cout << a << endl;
    if (i < j) {
        if (i != 3) {
            if (!k) {
                a = 1;
            } else if (k) {
                a = 5;
            }
        }
    }
    a += 2;
    cout << a << endl;
    return 0;
}