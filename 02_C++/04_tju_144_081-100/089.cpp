/**
 * @file 089.cpp
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

int func(int a) {
    static int x = 10;
    int y = 0;
    x += a;
    a++;
    y++;
    return (x + y + a);
}

int main() {
    int i = 3;

    while (i < 6)
        cout << func(i++) << " ";
    cout << endl;

    return 0;
}