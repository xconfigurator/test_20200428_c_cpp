/**
 * @file 07.cpp 回文字符串
 * @author your name (you@domain.com)
 * @brief 正读反读都一样的字符串，如“radar”
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int length = 0; int i = 0;
    char ch, str[20];

    while ((ch = getchar()) != '\n') {
        str[i] = ch;
        ++length;
    }

    for (int i = 0, j = length - 1; i < j ; ++i, --j) {
        if (str[i] != str[j]) return 0;
    }
    return 1;
}