/**
 * @file 02.8.cpp
 * @author your name (you@domain.com)
 * @brief
 * 
 * 实现分段函数
 *      x           x < 1
 * y =  x + 5       1 <= x < 10
 *      x - 5       x >= 10
 * 
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int main() {
    int x = 5, y;
    if (x < 1) {
        y = x;
    } else if (1 <= x && x < 10) {
        y = x + 5;
    } else {
        y = x - 5;
    }
    cout << "当 x = 5 时， y = " << y << endl;
    return 0;
}