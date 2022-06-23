/**
 * @file 029.cpp
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

int function(int x);

int main(int argc, char const *argv[]) {
    cout << function(7) << endl;
    return 0;
}

int function(int x) {
    int s;
    if (x == 1 || x == 2) {
        return 2;      
    }
    s = x * function (x - 2);
    return s;
}