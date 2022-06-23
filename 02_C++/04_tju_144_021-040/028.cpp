/**
 * @file 028.cpp
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

#define SR(x, y) x + y

int main() {
    int a(1), b(-1);
    a = 2 * SR(a, b);

    if (a)
        cout << "####" << endl;
    else
        cout << "****" << endl; 
    return 0;
}