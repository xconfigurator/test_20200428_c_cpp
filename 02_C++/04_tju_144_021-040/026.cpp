/**
 * @file 026.cpp
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

int sum(int p[], int &a);

int main(int argc, char const *argv[]) {
    int data[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, t;

    for (i = 0; i < 3; i++) {
        cout << sum(data[i], t) << " ";
        cout << t << endl;
    }
    return 0;
}

int sum(int p[], int &a) {
    int i, k = 0;
    static int s = 0;
    for (i = 0; i < 3; i++) {
        s += p[i];
        k += p[i];
    }
    a = k;
    return s;
}