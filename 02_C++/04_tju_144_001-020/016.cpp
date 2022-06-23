/**
 * @file 016.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    char a[80], b[80];
    int i = 0;
    cin >> a;

    while (a[i] != '\0') {
        b[i] = a[i] + 3;
        i++;
    }
    b[i] = '\0';
    cout << b << endl;
    return 0;
}

// 输入： hello world