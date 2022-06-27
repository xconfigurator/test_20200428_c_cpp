/**
 * @file 133.cpp
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

int main(int argc, char const *argv[]) {
    int i, j;
    char a;

    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= 5 - i; j++) {
            cout << ' ';
        }
        a = '*';
        for (j = 1; j <= 2 * i - 1; j++) {
            cout << a;
        }
        cout << endl;
    }
    return 0;
}

// 133 背 打印倒三角