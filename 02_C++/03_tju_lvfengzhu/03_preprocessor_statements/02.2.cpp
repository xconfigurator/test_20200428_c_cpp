/**
 * @file 02.2.cpp
 * @author your name (you@domain.com)
 * @brief 求100之内的自然数中被13整除的最大数
 * 
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int main() {
    for (int i = 100; i > 12; i--) {
        if (i % 13 == 0) {
            cout << "100内最大被13整除的数是：" << i << endl;
            break;
        } 
    }
    return 0;
}