/**
 * @file 136.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main() {
    int m, n = 0;

    for (m = 1; m <= 6; m++) {
        switch(m) {
            case 4:
            case 6:
            case 9:
            case 11: n = 30; break;
            case 2: n = 28;
            default: n = 31; break;
        }
        cout << n << " ";
    }
    return 0;
}

// 136 背 月份的另一种写法 哈哈哈 但需要修正一下“case 2: n = 28; break;”