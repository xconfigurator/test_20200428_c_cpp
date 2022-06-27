/**
 * @file 131.cpp
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
    int a, b;
    for (a = 1, b = 1; a <= 20; a++) {
        if (b % 3 == 1) {
            b += 3;
            continue;
        }
        if (b > 10) 
            break;
    }
    cout << "value a=" << a << endl << "value b=" << b << endl; 
    return 0;
}

// 易错！ 注意啊！