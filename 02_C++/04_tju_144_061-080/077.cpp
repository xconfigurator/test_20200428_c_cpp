/**
 * @file 077.cpp
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
    int a, b;

    for (a = 1, b = 1; b <= 100; b++) {
        if (a > 10) {
            break;
        }
        if (a == 1) {
            a += 3;
            continue;
        }
        a -= 3;
    }

    cout << "a=" << a << "b=" << b << endl;
    return 0;
}

// 注意b值！