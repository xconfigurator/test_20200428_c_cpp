/**
 * @file 080.cpp
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
    int x = 0;
    for (int i = 0; i < 2; i++) {
        x++;
        for (int j = 0; j <= 3; j ++) {
            if (j % 2) continue;
            x++;
        }
        x++;
    }
    cout << "x=" << x << endl;
    return 0;
}