/**
 * @file 12.cpp 编码
 * @author your name (you@domain.com)
 * @brief 
 * 给定一个只包含'A' ~ 'Z'的字符串，使用下面的方法给它编码：
 * （1）将字符串中的k个相同的字符写成“kX”,X是字符串中的字符。
 * （2）如果子串的长度是1，那么“1”要忽略。
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*
输入描述：
    第一行包含一个正整数N, 代表测试样例的个数。下面N行包含N个字符串。每个字符串仅包含“A” ~ “Z”， 且子串的长度小于100。
输出描述：
    对每个测试样例，输出它的编码在单独的一行上。
输入样例：
2
ABC
ABBCC
输出样例：
ABC
A2B3C
*/
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
    string s, t;
    int n, c, temp;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> s;
        c = temp = 0;
        t = s[0];

        for (int j = 0; j < s.size(); ++j) {
            if (s[j] == t[0]) {
                ++temp;
                // 如果已经是最后一个，直接输出
                if (j == s.size() - 1) {
                    if (temp == 1) {
                        cout << t[0];
                    } else {
                        cout << temp << t[0];
                    }
                } 
            } else {
                if (temp == 1) {
                    cout << t[0];
                } else {
                    cout << temp << t[0];
                }
                t[0] = s[j];
                temp = 1;
                // 如果已经是最后一个，直接输出
                if (j == s.size() - 1) {
                    if (temp == 1) {
                        cout << t[0];
                    } else {
                        cout << temp << t[0];
                    }
                }
            }         
        }
        cout << endl;
        s = "";
    }
    return 0;
}