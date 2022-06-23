/**
 * @file 030.cpp
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

double a;// 1

int main(int argc, char const *argv[]) {
    int a = 10;// 2

    {
        int a = 20;// 3
        double b;
        ::a = 20.5;
        b = ::a + a;
        cout << "a=" << a << " "<< "b=" << b << endl;
        cout << "::a=" << ::a << endl;
    }

    cout << "a=" << a << endl;
    cout << "::a=" << ::a << endl;
    return 0;
}