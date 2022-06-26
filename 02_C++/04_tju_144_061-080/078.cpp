/**
 * @file 078.cpp
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
    int m = 14, n = 63;

    while (m != n) {
        while (m > n) m = m - n;
        while (n > m) n = n - m;
    }
    cout << m << endl;
    return 0;
}

// 078 背 最大公约数！