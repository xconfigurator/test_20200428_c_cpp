/**
 * @file 37.cpp 字符串统计
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*
Problem Description:
    对于给定一个字符串，统计其中数字字符出现的次数。
Input:
    输入数据有多行，第一行是一个整数n, 表示测试实例的个数，后面跟着n行，每行包括一个由字母和数字组成的字符串。
Output:
    对于每个测试实例，输出该串中数值的个数，每个输出占一行。
Sample Input:
2
asdfasdf123123asdfasdf
asdf111111111asdfasdfasdf

Sample Output:
6
9
*/
#include <iostream>
#include <cstring>
// #include <stdio.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    getchar();
    while (n--) {
        int sum = 0;
        char *s = new char[100];
        //gets(s);
        scanf("%s", s);
        for (int i = 0; i < strlen(s); i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                sum ++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}