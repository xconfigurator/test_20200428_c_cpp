/**
 * @file 02.6.cpp
 * @author your name (you@domain.com)
 * @brief 
 *
 * 编写两个函数：
 * 一个是将一个5位int型整数转换恒伟每两个数字间加一个空格的字符串。
 * 另一个是求出转换后的字符串的长度。
 * 由主函数输入int型数，并输出转换后的字符串和长度。
 * 
 * @version 0.1
 * @date 2023-10-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;
char *transform(int);
int show();
char s[10];

int main() {
    int number;
    cout << "输入一个5位的整型数：";
    cin >> number;
    cout << "整型数加空格后位：" << transform(number) << endl;
    cout << "加空格后字符串长度为：" << show() << endl;
    return 0;
}

char *transform(int n) {
    int a[5];
    a[4] = n % 10;
    a[3] = n / 10 % 10;
    a[2] = n / 100 % 10;
    a[1] = n / 1000 % 10;
    a[0] = n / 10000;
    int j = 0;
    //for (int i = 0, j = 0; i < 5; i++, j += 2) {
    for (int i = 0; i < 5; i++, j += 2) {
        s[j] = char(a[i] + '0');
        s[j + 1] = ' ';
    }
    s[j - 1] = '\0';
    return s;
}

int show() {
    int n = 0, i = 0;
    while (s[i++]) {
        n++;
    }
    return n;
}