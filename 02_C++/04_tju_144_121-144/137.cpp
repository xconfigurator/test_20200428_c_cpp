/**
 * @file 137.cpp
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

const int MAXN = 20;

int p(int k, int a[]) {
    int m, i , c = 0;
    for (m = 2; m <= k; m++) {
        for (i = 2; i <= m; i++) {
            if (!(m % i)) break;
        }
        if (i == m) a[c++] = m;
    }
    return c;
}

int main(int argc, char const *argv[]) {
    int i, m, s[MAXN];
    m = p(13, s);

    for (i = 0; i < m; i++) {
        cout << s[i] << " ";
    }
    return 0;
}

// 137 目前（20220627）还没看出来这个程序是干啥的。 怎么有点像是在打素数？ 2 3 5 7 11 13 17 19 