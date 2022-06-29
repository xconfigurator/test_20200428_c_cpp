/**
 * @file 13.cpp 看和说
 * @author your name (you@domain.com)
 * @brief 
 * 看和说系列定义如下：
 * 以数字字符串作为这个系列中的第一个元素。每个随后的元素是对它前面一个数字的口头描述。
 * 比如，字符串12234111，可以被描述成“1个1,2个2,1个3,2个4,3个1”。
 * 因此，122344111应该写成1122132431。
 * 类似地，字符串1111111111可以写成101。
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*
输入描述：输入中包含多个测试样例。第一行是测试样例的个数。
输出描述：对每个测试样例，打印按提议要求的字符串
输入样例：
3
122344111
1111111111
12345
输出样例：
1122132431
101
1112131415
*/
#include <iostream>
//#include <cstring>
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
                    cout << temp << t[0];
                }
            } else {
                cout << temp << t[0];
                t[0] = s[j];
                temp = 1;
                // 如果已经是最后个，直接输出
                if (j == s.size() - 1) {
                    cout << temp << t[0];
                }
            }
        }
        cout << endl;
    }
    return 0;
}