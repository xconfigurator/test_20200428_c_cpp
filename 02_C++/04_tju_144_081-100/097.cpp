/**
 * @file 097.cpp
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

void f(int []);

int main(int argc, char const *argv[]) {
    int x[] = {19, -6, 26, 0, -18};
    f(x);
    for (int i = 0; i <= 4; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
    return 0;
}

void f(int a[]) {
    int i, j, t;
    for (i = 1; i <= 4; i++) {
        t = a[i];
        for (j = i; j > 0; j--) {
            if (t < a[j - 1]) {
                a[j] = a[j - 1];
            } else {
                break;
            }
        }
        a[j] = t;
    }
}