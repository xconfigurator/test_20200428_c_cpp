/**
 * @file 091.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <cstring>
using namespace std;

void reverse1(char *s1, char *s2) {
    char ch;
    if (s1 < s2){
        ch = *s1;
        *s1 = *s2;
        *s2 = ch;
        reverse1(++s1, --s2);
    }
}

void reverse(char *s) {
    reverse1(s, s + strlen(s) - 1);
}

int main(int argc, char const *argv[]) {
    char str[] = "asdfghjkl";
    cout << str << endl;

    reverse(str);
    cout << str << endl;
    return 0;
}

// 091 背 字符串逆序