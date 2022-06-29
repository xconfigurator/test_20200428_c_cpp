/**
 * @file 05.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-20
 * 
 * @copyright Copyright (c) 2022
 * 
 * 计算字符串中多少个单词：
 * 输入一行字符，统计其中有多少单词。
 * 要求每个单词之间用空格分隔开，最后的字符不能为空格。
 */
#include <iostream>
#include <cstdio>
//#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[]) {
    char str[100];
    int i, word = 1;
    char blank;
    gets_s(str);// 原文用的是gets

    if (str[0] == '\0') {
        cout << "There is no words";
    } else if (str[0] == ' ') {
        cout << "There is jus a blank!";
    } else {
        for (i = 0; str[i] != '\0'; ++i) {
            blank = str[i];
            if (blank == ' ') ++word;
        }
        cout << "There are " << word << " words!" << endl;
    }
    return 0;
}