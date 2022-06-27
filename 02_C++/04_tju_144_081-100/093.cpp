/**
 * @file 094.cpp 添加了模板的函数操作， 将数组从小到大排列即可。
 * 
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

template <typename T>

void fun(T *a, int n) {
    int k;
    T t;

    for (int i = 0; i < n - 1; i++) {
        k = i;
        for (int j = i + 1; j < n; j++) {
            if (a[k] > a[j]) {
                k = j;
                //break;//liuyang 20220627
            }
        }
        t = a[i];
        a[i] = a[k];
        a[k] = t;
    }
}

int main(int argc, char const *argv[]) {
    double a[5] = {12.3, 14.45, 5.68, -4.5, 0.2};
    char b[5] = {'x', 'f', 'o', 'e', 'd'};

    fun(a, 5);
    fun(b, 5);

    for (int i = 0; i < 5; i++) {
        cout << a[i] << "\t" << b[i] << endl;
    }
    return 0;
}

// 093 背 添加了模板的函数操作