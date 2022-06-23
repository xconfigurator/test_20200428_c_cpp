/**
 * @file 019.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int n, a[20], k = 0;
    cin >> n;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            a[k] = i;
            k ++;
        }
    }

    for (int i = 0; i < k; i++) {
        cout << a[i] << " ";
        if ((i + 1) % 5 == 0) {
            cout << endl;
        }
    }

    cout << endl;
    return 0;
}

// 输入： 36
