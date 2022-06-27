/**
 * @file 101.cpp
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

void ob(int *a, int n) {
    int i = 0, j = n - 1, t;
    while (i < j) {
        while (a[i] % 2 && i < j) i++;
        while (!(a[j] % 2) && i < j) j--;
        if (i < j) {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
}

int main(int argc, char const *argv[]) {
    int ar[6] = {23, 12, 14, 15, 33, 28};
    ob(ar, 6);

    for (int i = 0; i < 6; i++) {
        cout << ar[i] << " ";
    }
    cout << endl;
    return 0;
}