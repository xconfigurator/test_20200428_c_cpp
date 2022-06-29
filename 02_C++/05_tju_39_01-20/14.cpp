/**
 * @file 14.cpp 数字根
 * @author your name (you@domain.com)
 * @brief 
 * 一个正整数的数字根是通过计算该整数的各位的和产生的。
 * 如果一个整数的各位和是一位整数，那么这个数字就是该整数的数字根。
 * 如果该整数的各位和是两位或者多位整数，那么就需要重复计算各位的和，直至获得一位整数。
 * 例如：
 * 考虑正整数24。把2和4相加得到6。由于6是一个一位整数，所以，6就是24的数字根。
 * 考虑正整数39。把3和9相加得12，因为12不是一位整数，因而需要重复处理。再把1加2得到3，现在3已是一个一位正整数了，那么3就是39的数字根。
 * 
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*
输入描述：输入中包含一列正整数，一行一个。用0表示输入结束。
输出描述：对于输入的每个整数，在一行上单独输出它的数字根。
输入样例：
24
39
0
输出样例：
6
3
*/
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
    string s;
    int sum;
    while (cin >> s) {
        if (s == "0") {
            break;
        }
        sum = 0;

        for (int i = 0; i < s.size(); ++i) {
            sum += s[i] - '0';
        }

        while (1) {
            if (sum < 10) {
                cout << sum << endl;
                break;
            } else {
                sum  = sum / 10 + sum % 10;
            }
        }
    }
    return 0;
}