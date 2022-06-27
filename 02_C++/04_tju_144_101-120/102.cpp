/**
 * @file 102.cpp
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

int x = 7;

int fun(int x, int y) {
    x = x * y;
    cout << "fun():x=" << x << endl;
    return x;
}

int main(int argc, char const *argv[]) {
    x = x + fun(x, 3);
    cout << "main():x=" << x << endl;
    return 0;
}