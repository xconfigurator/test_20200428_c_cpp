/**
 * @file 072.cpp
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
    int a(3);
    double x(12.25);
    char d('m');

    x = 1.2e3 - 3.5 / 7 + 100;
    d++;
    a = (int)x / 3 + 3 % 5 - 4 / 3;
    
    cout << a << " " << x << " " << d << endl;
    return 0;
}

// 注意x = 1.2e3 - 3.5 / 7 + 100;