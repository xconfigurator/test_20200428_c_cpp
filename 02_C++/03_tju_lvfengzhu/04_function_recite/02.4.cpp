/**
 * @file 02.4.cpp
 * @author your name (you@domain.com)
 * @brief 
 *
 * 写出一个函数，使从键盘上输入的一个字符串反序存放，并在主函数中输入和输出该字符串。
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

void reverse(char []);

int main() {
    char s[80];
    cout << "请输入一个字符串：";
    cin >> s;
    cout << "反序前：" << s << endl;
    reverse(s);
    cout << "反序后：" << s << endl;
    return 0;
}

void reverse(char ss[]) {
    int n = strlen(ss);
    for (int i = 0; i < n / 2; i++) {
        char c = ss[i];
        ss[i] = ss[n - 1 - i];
        ss[n - 1 -i] = c;
    }
}