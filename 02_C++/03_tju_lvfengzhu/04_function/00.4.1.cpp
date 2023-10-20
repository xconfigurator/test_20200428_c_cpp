/**
 * @file 00.4.1.cpp
 * @author your name (you@domain.com)
 * @brief 编程产生若干个在一定范围内的随机数
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main() {
    unsigned seed;
    cout << "Enter seed:";
    cin >> seed;
    srand(seed);
    for (int i = 1; i <= 16; i++) {
        cout << setw(8) << 1 + rand() % 10;
        if (i % 8 == 0) {
            cout << endl;
        }
    }
    cout << endl;
    return 0;
}