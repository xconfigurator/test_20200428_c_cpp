/**
 * @file 142.cpp
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

int f(int n) {
    if (n == 1 || n == 2) {
        return 2;
    } else {
        return f(n - 1) + f(n - 2);
    }
}

int main(int argc, char const *argv[]) {
    int i, j = 0;

    for (i = 4; i < 6; i++) {
        j += f(i);
        cout << "j=" << j << endl;
    }
    return 0;
}

// 142 背 斐波那契数列