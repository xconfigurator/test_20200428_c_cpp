/**
 * @file 010.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int count = 0;
    for (int i = 1; i< 36; i++) {
        if (i % 3 != 0)
            continue;
        if (i % 9 == 0)
            continue;
        cout << i << " ";

        if (++count % 5 == 0)
            cout << endl;
    }
    cout << endl;
    return 0;
}