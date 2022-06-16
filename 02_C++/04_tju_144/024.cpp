/**
 * @file 024.cpp
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
    int a = 10;
    cout << "a=" << a << endl;
    
    {
        int b = 20;
        a = a + b;
        cout << "a=" << a << endl;
        cout << "b=" << b << endl;
        a = 15;
    }
    
    cout << "a=" << a << endl;

    return 0;
}