/**
 * @file 135.cpp
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

int power(int m);

int main(int argc, char const *argv[]) {
    int a[3][3], i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            a[i][j] = (i + 2) * (j + 1) + 1;
            cout << " " << a[i][j];
        }
        cout << endl;
    }

    cout << "Results:" << endl;
    int m = a[0][0], s = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (a[i][j] < m) {
                m = a[i][j];
            }
            if (i != j) {
                s += power(a[i][j]);
            }
        }
    }
    cout << "m=" << m << endl;
    cout << "s=" << s << endl;
    return 0;
}

int power(int m) {
    return m *= m;
}