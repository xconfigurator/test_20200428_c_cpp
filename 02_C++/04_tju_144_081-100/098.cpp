/**
 * @file 098.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

void fun1(int m, int &s);
int fun2(int x);

int main(int argc, char const *argv[]) {
    int n = 9, s = 2;
    fun1(n, s);
    cout << s << endl;    
    return 0;
}

void fun1(int m, int &s) {
    for (int i = 1; i < m ; i++) {
        if (fun2(i)) {
            s = s * i;
        }
    }
}

int fun2(int x) {
    if (x % 3 == 0) {
        return 1;
    } else {
        return 0;
    }
}