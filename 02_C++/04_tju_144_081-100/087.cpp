/**
 * @file 087.cpp
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

long func(int b, int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return func(b - 1, n - 2) + func(b - 2, n -1);
    }
}

int main(int argc, char const *argv[]) {
    cout << func(9, 4) << endl;
    return 0;
}

// 分析递归