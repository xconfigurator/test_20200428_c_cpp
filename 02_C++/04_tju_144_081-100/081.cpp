/**
 * @file 081.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int i, j, k;

    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 4 - i; j++) cout << "1";
        for (k = 0; k <= 2 * i + 1; k++) {
            if (k <= 3) cout << "1";
            else cout << "0";
        }
        cout << endl;
    }
    return 0;
}

// 检查循环，笔算的时候注意用纸记录。