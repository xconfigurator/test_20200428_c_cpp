/**
 * @file 088.cpp
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

long fac(int);

int main(int argc, char const *argv[]) {
    int i;
    for (i = 1; i <= 5; i++)
        cout << i << " " << fac(i + 1) << endl;
    return 0;
}

long fac(int n) {
    static long f = 1;
    f = f * n;
    return f;
}