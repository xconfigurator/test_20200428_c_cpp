/**
 * @file 01.5.cpp
 * @author your name (you@domain.com)
 * @brief 分析程序输出结果
 * 
 * static
 *
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int fac(int a);

int main() {
    int s(0);
    for (int i(1); i <= 5; i++) {
        s += fac(i);
    }
    cout << "5! + 4! + 3! + 2! + 1! = " << s << endl;// 153
    return 0;
}

int fac(int a) {
    static int b = 1;
    b *= a;
    return b;
}