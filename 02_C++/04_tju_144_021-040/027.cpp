/**
 * @file 027.cpp
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

#define SR(x, y) x + y

int main(int argc, char const *argv[]) {
    int a(5), b(4);

    a += 2 * SR(a, b);
    cout << "a=" << a << endl; 
    return 0;
}