/**
 * @file str03strstr.cpp
 * @author liuyang
 * @brief 编写一个判断子串的函数 字符串视频04 共8分钟。
 * 
 * 联想数据结构中字符串一章
 * 1. 朴素查找(本代码实现的就是朴素查找法)
 * 2. KMP
 * 
 * 题目要求：
 * 编写一个函数int Strstr(char s1[], char s2[]);
 * 如果s2不是s1的子串，返回-1
 * 如果s2是s1的子串，返回其在s1中第一次出现的位置
 * 空串是任何串的子串，且出现位置为0。
 * 
 * @version 0.1
 * @date 2021-12-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;

int Strstr(char s1[], char s2[]) {
    if (s2[0] == 0) {
        return 0;
    }
    for (int i = 0; s1[i]; ++i) {//枚举比较起点 （liuyang:记住这骚气的写法! 串里有0也不挂。0的ASCII可不是0， 0的ASCII是48）
        int k = i, j = 0;
        for (; s2[j]; ++j, ++k) {
            if (s1[k] != s2[j]) break;
        }
        if (s2[j] == 0) {// 已经找到了带搜索串的末尾
            return i;
        }
    }
    return -1;
}

int main(int argc, char const *argv[]) {
    char s1[] = "1023235";
    char s2[] = "23";
    cout << Strstr(s1, s2) << endl;
    cout << Strstr("hello, world", "world") << endl;
    return 0;
}