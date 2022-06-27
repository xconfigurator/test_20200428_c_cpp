/**
 * @file 085.cpp
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

void swap(int &m1, int &m2) {
    m1 *= 2;
    m2 += 2;
}

int main(int argc, char const *argv[]) {
    int a(10), b(20);
    cout << a << " " << b << endl;

    swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}