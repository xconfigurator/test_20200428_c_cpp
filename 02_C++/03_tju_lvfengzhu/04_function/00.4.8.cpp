/**
 * @file 00.4.8.cpp
 * @author your name (you@domain.com)
 * @brief 
 * 
 * strcmp
 * strcat
 *
 * 编写程序，先判断两个字符串是否相等，如果不相等，则将后一个字符串连接在前一个字符串的后边，组成的新字符串仍放在签一个字符串中；
 * 否则输出“两个字符串相等”的信息。编程时不用string.h中所提供的的系统函数。
 *
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int mystrcmp(char s1[], char s2[]);
void mystrcat(char s1[], char s2[]);

int main() {
    char s3[10], s4[10];
    cout << "输入两个字符串：";
    cin >> s3 >> s4;
    if (mystrcmp(s3, s4)) {
        cout << "两个字符串相等！\n";
    } else {
        mystrcat(s3, s4);
        cout << s3 << endl;
    }
    return 0;
}

int mystrcmp(char s1[], char s2[]) {
    for (; *s1!= '\0' && *s2 != '\0'; s1++, s2++) {
        if (*s1 != *s2) {
            return 0;
        } 
    }
    return 1;
}

void mystrcat(char s1[], char s2[]) {
    while (*s1 != '\0') {
        ++s1;
    }
    for (; *s1 = *s2; s1++, s2++) {

    }
}