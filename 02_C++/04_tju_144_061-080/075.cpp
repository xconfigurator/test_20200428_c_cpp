/**
 * @file 075.cpp
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
    int a, b = 5;
    cin >> a;

    switch(a > 0) {
        case 1:
            switch(b < 10) {
                case 0: cout << "*" << endl;
                case 1: cout << "#" << endl;
            }
        default: cout << "!\n";
        case 0:
            switch(b > 0) {
                case 0: cout << "ok1\n";
                case 1: cout << "ok2\n";
            }
    }
    return 0;
}

// 输入10
// 输入0