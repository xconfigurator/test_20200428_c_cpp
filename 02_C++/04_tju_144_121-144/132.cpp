/**
 * @file 132.cpp
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

int main(int argc, char const *arvg[]) {
    int i, j = 0;
    char a[50];
    cin >> a;

    for (i = 0; a[i] != '\0'; i++) {
        if (!(a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z')) j++;
    }
    cout << j << endl;
    return 0;
}

// 输入 2022-TJU 901 Test