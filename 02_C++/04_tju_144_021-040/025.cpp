/**
 * @file 025.cpp
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

int a = 10;

int main(int argc, char const *argv[]) {
    cout << "a=" << a << endl;

    float a = 7.8;
    cout << "a=" << a << endl;

    {
        int a = 5;
        cout << "a=" << a << endl;
        a = 15;
    }
    cout << "a=" << a << endl;
    return 0;
}