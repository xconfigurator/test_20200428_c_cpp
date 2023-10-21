/**
 * @file 02.10.cpp
 * @author your name (you@domain.com)
 * @brief 
 *
 * 已知一个二维数组，拼成一个完成的字符串。
 *
 * @version 0.1
 * @date 2023-10-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <string.h>
using namespace std;

char s[][5] = {"abcd", "efgh", "ijkl", "mnop"};

int main() {
    strcat(s[0], s[1]);
    strcat(s[0], s[2]);
    strcat(s[0], s[3]);
    cout << s[0] << endl;
    return 0;
}