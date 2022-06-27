/**
 * @file 139.cpp
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

// 注：b的ASCII为98

void fun(int n, char ch) {
    int i;
    for (i = 0; i < n; i++) {
        cout << ch;
    }
    cout << endl;
}

int main(int argc, char const *argv[]) {
    char ch1 = 'a', ch2 = 'f';// 97 102
    fun(5, 98);
    fun(ch2 - ch1, ch2);
    return 0;
}