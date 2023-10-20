/**
 * @file 02.4.cpp
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
    int i(0);
    while(++i) {
        if (i == 10) break;
        if (i % 3 != 1) continue;
        cout << i << endl;
    }
    return 0;
}