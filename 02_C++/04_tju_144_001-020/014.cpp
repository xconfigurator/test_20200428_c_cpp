/**
 * @file 014.cpp
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
    int i = 0, s = 0;

    for (;;) {
        i += 2;
        if (i > 8) {
            cout << s << endl;
            break;
        }
        if (i == 6)
            continue;
        s += i;
    }
    return 0;
}