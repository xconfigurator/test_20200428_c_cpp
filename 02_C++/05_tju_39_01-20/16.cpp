/**
 * @file 16.cpp 统计字符数
 * @author your name (you@domain.com)
 * @brief 判断一个由a-z这26个字符组成的字符串中哪个字符出现的次数最多。
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*
输入描述：
    第一行是测试数据的组数n，每组测试数据占一行，是一个由a-z这26个字符组成的字符串，每行数据不超过1000个字符且非空。
输出描述：
    n行，每行输出对应一个输入。一行输出包括出现次数最多的字符和该字符出现的次数，中间是一个空格。
    如果有多个字符出现次数相同且最多，那么输出ASCII码最小的那一个字符。
输入样例：
2
abbcc
aaaabbbb
输出样例：
c 3
a 4
*/
#include <iostream>
#include <cstring> // strlen
using namespace std;

int main(int argc, char const *argv[]) {
    int cases, sum[26], i, max;
    char str[1001];
    cin >> cases;

    while (cases--) {
        cin >> str;
        // 初始化：将每个字符对应的数量置0
        for (i = 0; i < 26; ++i) {
            sum[i] = 0;
        }

        // 遍历字符串，对应字符对应数量增加
        for (i = 0; i < strlen(str); ++i) {
            ++sum[str[i] - 'a'];
        }

        max = 0;

        // 判断最多的字符
        for (i = 1; i < 26; ++i) {
            if (sum[i] > sum[max]) max = i;// > 保证了“如果有多个字符出现次数相同且最多，那么输出ASCII码最小的那一个字符。”
        }

        cout << char(max + 'a') << " " << sum[max] << endl;
    }
    return 0;
}