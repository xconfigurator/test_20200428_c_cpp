/**
 * @file 140.cpp
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

const int M = 4;

int main(int argc, char const *argv[]) {
    int i, j, k, m, a[M];
    for (i = 0; i < M; i++) {
        cin >> a[i];
    }

    for (i = M; i > 2; i--) {
        k = a[M - 1];
        for (j = M - 1; j > 0; j--) {
            a[j] = a[j - 1];
        }
        a[0] = k;
        for (m = 0; m < M; m++) {
            cout << a[m];
        }
        cout << endl;
    }
    return 0;
}

// 输入： 1 2 3 4
