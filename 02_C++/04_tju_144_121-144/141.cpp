/**
 * @file 141.cpp
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

int main(int argc, char const *argv[]) {
    int x = 5, y, k;
    float z = 15, w;

    y = x++;
    w = z/y + 7 % x;
    k = x || w++;

    cout << "w=" << w << endl;
    cout << "k=" << k << endl;
    return 0;
}