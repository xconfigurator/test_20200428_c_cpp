/**
 * @file 02.10.cpp
 * @author your name (you@domain.com)
 * @brief 
 * 
 * 编程输出一个菱形（具体要求见p77） 
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
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j < i + 7; j++) {
            if (j <= 7 - i) {
                cout << ' ';
            } else {
                cout << '*';
            }
        }
        cout << endl;
    }
    for (int i = 4; i >= 1; i--) {
        for (int j = 1; j <= i + 6; j++) {
            if (j <= 7 - i) {
                cout << ' ';
            } else {
                cout << '*';
            }
        }
        cout << endl;
    }
    return 0;
}