/**
 * @file 099.cpp
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

void fun(int [], int);

int main(int argc, char const *argv[]) {
    const int arraySize = 5;
    int a[] = {35, 22, 71, 18, 92};
    fun(a, arraySize);
    cout << endl;
    return 0;
}

void fun(int x[], int size) {
    if (size > 0) {
        fun(&x[1], size - 1);
        cout << x[0] << " ";
    }
}

// 倒序输出数组