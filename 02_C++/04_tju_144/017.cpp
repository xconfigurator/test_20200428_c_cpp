/**
 * @file 017.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int x[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int *p[3] = {x[0], x[1], x[2]};

int main(int argc, char const *argv[]) {
    for (int i = 0; i < 3; i++) {
        cout << *p[i] << " " << *(p[i] + 2) << endl;
    }
    return 0;
}