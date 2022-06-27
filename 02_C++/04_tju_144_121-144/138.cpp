/**
 * @file 138.cpp
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
    int i = 1;
    while (i <= 15) {
        i++;
        if (i % 3 != 2) {
            continue;
        } else {
            if (i % 5) {
                continue;
            } else {
                cout << i;
            }
        }
    }
    return 0;
}

// 在给定范围内被3除余2并且可以被5整除的整数。