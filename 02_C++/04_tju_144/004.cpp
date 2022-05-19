/**
 * @file 004.cpp
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
    int a = 4, b = 3, c = 2, d = 1;
    int x, y = 0;
    
    x = a < b? a + 1 : c < d ? c + 1 : d + 1;
    cout << x << endl;
    cout << (a + b, b + c, c + d) << endl;

    y +=a += b += c + d;
    return 0;
}