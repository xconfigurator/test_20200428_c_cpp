/**
 * @file 143.cpp
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

double fun(double a, double b, char c = '*') {
    double d;
    switch(c) {
        case '+': d = a + b; break;
        case '-': d = a - b; break;
        case '*': d = a * b; break;
        case '/': d = a / b; break;
    }
    return d;
}

int main(int argc, char const *argv[]) {
    double d = 1.0;
    d -= fun(fun(2.5, 3.5, '+'), fun(3, 5), '/');
    cout << "d=" << d << endl;
    return 0;
}

// 不难 仔细算