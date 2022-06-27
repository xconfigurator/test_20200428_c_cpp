/**
 * @file 093.cpp
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

int fun(int [], int);

int main(int argc, char const *argv[]) {
    int a[][4] = {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int k = sizeof(a) / (sizeof(int) * 4);

    for (int i = 0; i < k; i++) {
        cout << fun(*(a + i), 4) << " ";
    }
    cout << endl;
    return 0;
}

int fun(int b[], int size) {
    if (size == 1) {
        return b[0];
    } else {
        return b[size - 1] + fun(b, size - 1);
    }
}