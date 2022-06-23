/**
 * @file 033.cpp
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

void print(int n);

int main(int argc, char const *argv[]) {
    for (int i = 1; i < 5; i++) {
        print(i);
    }
    return 0;
}

void print(int n) {
    for (int i = 1; i < n; i++) {
        cout << "**";
    }
    cout << endl;
}