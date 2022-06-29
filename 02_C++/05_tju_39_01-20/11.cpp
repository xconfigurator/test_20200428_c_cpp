/**
 * @file 11.cpp 排列对称串
 * @author your name (you@domain.com)
 * @brief 对那些对称的字符串从小到大的顺序输出。字符串先以长度轮大小，如果长度相同，再以ASCII码值为排序标准
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*
输入描述：输入数据含有一些字符串，以字符串“0”结束。
输出描述：根据每个字符串，找出对称的那些串，并且按照从小到大的顺序输出。
输入样例：
123321
123454321
123
321
121212
\\dd\\
0
输出样例：
123321
\\dd\\
123454321
*/
#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

bool Comp(string &s1, string &s2) {
    return s1.length() != s2.length() ? s1.length() < s2.length() : s1 < s2;
}

int main(int argc, char const *argv[]) {
    vector<string> v;
    string t, s;
    while (cin >> s) {
        if(s == "0") {
            break;
        }
        t = s;
        // 反转字符串，用来判断字符串是否对称
        reverse(t.begin(), t.end());

        if (t == s) v.push_back(s);
    }

    // 按Comp函数比较规则排序
    sort(v.begin(), v.end(), Comp);

    // 输出向量的所有元素
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << endl;
    }
    
    return 0;
}