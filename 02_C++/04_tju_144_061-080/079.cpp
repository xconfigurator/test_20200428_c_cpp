/**
 * @file 079.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int x(3), y(6), z(0);
    while (x++ != (y = y - 1)) {
        z++;
        if (y < x) break;
    }
    cout << x << " " << y << " " << z << endl;
    return 0;
}