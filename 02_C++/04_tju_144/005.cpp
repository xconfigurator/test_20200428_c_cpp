/**
 * @file 005.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int m(1), n(2), k;

    k = ++m;
    cout << "k=" << k << endl;

    k = m + n++;
    cout << m << n << k << endl;

    k = --n - m;
    cout << m << n << k << endl;

    k = (m >= n);
    cout << k << endl;

    return 0;
}