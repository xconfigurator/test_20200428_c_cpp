/**
 * @file 001.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main() {
    int a, b;
    a = -5;
    b = 10;

    cout << "Original:\t\t";
    cout << "a = " << a << " " << "b = " << b << endl;

    cout << "After ++a, b--:\t\t";
    cout << "a = "<< ++a << " " << "b = " << b-- << endl;

    cout << "After a++, --b:\t\t";
    cout << "a = " << a++ << " " << "b = " << --b << endl;

    return 0;
}