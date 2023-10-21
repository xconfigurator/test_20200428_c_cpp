/**
 * @file array09funcparameter.cpp
 * @author your name (you@domain.com)
 * @brief 数组作为函数的参数
 * @version 0.1
 * @date 2022-12-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

void showArr(int a[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void showArr2(int *a, int n) {// 也可这样传参
    showArr(a, n);
}

void changeArr(int a[], int n) {
    for (int i = 0; i < n; ++i) {
        ++a[i];
    }
}

void changeArr2(int* a, int n) {// 也可以这样传参
    changeArr(a, n);
}

int main(int argc, char const *argv[]) {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(a) / sizeof(int);
    
    showArr(a, size);
    changeArr(a, size);
    showArr(a, size);

    cout << "######################" << endl;

    showArr2(a, size);
    changeArr2(a, size);
    showArr2(a, size);

    return 0;
}