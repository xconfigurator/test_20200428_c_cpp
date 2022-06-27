/**
 * @file 144.cpp
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

int main() {
    int a, p = 1, s = 0;

    for (a = 1; a <= 5; a++) {
        p = p * a;
        s = s + p;
    }
    cout << "p=" << p << endl;
    cout << "s=" << s << endl;
    return 0;
}