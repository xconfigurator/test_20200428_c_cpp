/**
 * @file sieve.tsinghua.4.1.1.cpp
 * @author your name (you@domain.com)
 * @brief 求100以内的素数（枚举）
 * https://www.bilibili.com/video/BV1k14y1E75N/?p=42&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 *
 * @version 0.1
 * @date 2024-02-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
using namespace std;

bool isPrime(int);
int main(int argc, char const *argv[]) {
    cout << "100以内的素数：" << endl;
    for (int i = 1; i <= 100; i++) {
        if (isPrime(i)) {
            cout << i << endl;
        }
    }
    return 0;
}

bool isPrime(int n) {
    bool flag = true;
    for (int i = 2; i * i < n; ++i) {
        if (n % i == 0) {
            flag = false;
            break;
        }
    }
    return flag;
}