/**
 * @file 02.12.cpp
 * @author your name (you@domain.com)
 * @brief 
 *
 * 哥德巴赫猜想：任何一个充分大的偶数（大于等于6）总可以表示成两个素数之和。编程验证之。
 * 关键是编写一个检查素数的程序。
 *
 * 课本上参考程序中判断素数的程序写得令人费解。这里换了一个写法。
 *
 * 输入：126
 * 
 * @version 0.1
 * @date 2023-10-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

bool is_prime(int n) {
    bool isPrime = true;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    return isPrime; 
}

int main() {
    int n;
    cout << "输入一个大于等于6的偶数：";
    cin >> n;
    cout << "两个素数之和的所有可能" << endl;
    for (int i = 2, j = 0; i < n / 2 + 1; i++) {
        j = n - i;
        if (is_prime(i) && is_prime(j)) {
            cout << "N = " << i << " + " << j << endl; 
        }
    }
    return 0;
}