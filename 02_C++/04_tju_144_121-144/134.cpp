/**
 * @file 134.cpp
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

int main(int argc, char const *argv[]) {
    int i, j;
    char a[10] = "bacdfgeih";

    for (i = 0; i < 9; i++) {
        for (j = i; j < 9; j++) {
            char t;
            if (a[i] > a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    a[9] = '\0';
    cout << a << endl;
    return 0;
}

// 134 背 字符串数组冒泡排序
