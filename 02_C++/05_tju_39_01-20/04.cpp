/**
 * @file 04.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-19
 * 
 * @copyright Copyright (c) 2022
 * 
 * 回文素数
 * 任意整数i, 当从左向右读与从右向左读实相同的，且为素数。
 * 求：1000以内的回文素数。
 */
#include <iostream>
using namespace std;

int IsPrime(int i) {
    int j;
    if (i <= 1) return 0;
    if (i == 2) return 1;
    for (j = 2; j * j <= i; ++j) {
        if (i % j == 0) return 0;
    }
    return 1;
}

int main(int argc, char const *argv[]) {
    int i;
    for (i = 10; i <= 1000; ++i) {
        if (IsPrime(i) == 1) {
            if (i / 100 == 0) {
                if (i / 10 == i % 10) {
                    cout << i << endl;
                }
            } else if (i / 100 == i % 10) {
                cout << i << endl;
            }
        }
    }
    return 0;
}