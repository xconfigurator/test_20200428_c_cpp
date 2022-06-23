/**
 * @file 013.cpp
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

int main(int argc, char const *argv[]) {
    int a = 5;

    if (a++ > 5) 
        cout << a << endl;
    else 
        cout << a-- << endl;

    return 0;
}