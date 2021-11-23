/**
 * @file Permutation.pku.cpp
 * @author liuyang
 * @brief 全排列 （递归） 
 * 参考1. 《程序设计导引及在线实践（第2版)》 P168 递归实现
 * 参考2. 参考视频：全排列 信息学奥赛 1199 讲的是同一道题 （5分钟的视频介绍 非常好！）
 * https://www.bilibili.com/video/BV1Fy4y1i7D5?from=search&seid=8089310972890213058
 * @version 0.1
 * @date 2021/2/19
 * 
 * @copyright Copyright (c) 2021
 * 
 * 输入样例：
 * abc
 * 
 */
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int MX = 10;
char s[MX];             // 输入的字符串
char result[MX];        // 输出的排列放在这里
int L;                  // 字符串长度
int used[MX];           // used[i]标识第i个字母是否用过

void permutation(int n) {
    // 从排列的第n哥位置开始往后摆放字母
    if (n == L) {
        result[L] = 0;
        cout << result << endl;
        return;
    }
    for (int i = 0; i < L; ++i) {   // 在第n个位置穷举所有可能方法
        if (!used[i]) {             // 如果第i个字母没有用过
            result[n] = s[i];       // 第n个位置放第i哥字母
            used[i] = 1;
            permutation(n + 1);
            used[i] = 0;            // 取消第n个位置的摆法，以便下次尝试另一种摆法
        }

    }
}

int main(int argc, char const *argv[]) {
    cin >> s;
    L = strlen(s);
    memset(used, 0, sizeof(used));
    sort(s, s + L);     // 排序
    permutation(0);
    return 0;
}