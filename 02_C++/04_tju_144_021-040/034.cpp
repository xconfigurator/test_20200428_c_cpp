/**
 * @file 034.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

template <class T>

void fx(T a[], int n) {
    T temp;
    for (int i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}

int main(int argc, char const *argv[]) {
    int a[6] = {1, 2, 3, 4, 5, 6};
    double x[6] = {2.2, 3.3, 4.4, 5.5, 6.6, 7.7};

    fx(a, 6);
    fx(x, 6);

    for (int i = 0; i < 6; i++) {
        cout << a[i] << " " << x[i] << endl;
    }
    return 0;
}

// 这个真好！