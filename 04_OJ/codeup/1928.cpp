/*
@author liuyang
@since 2021/2/19

视频：
codeup 1928 15:22
https://www.bilibili.com/video/BV1Ty4y1n7JH?p=5

分类：模拟
日期差值

题目描述：
有两个日期，求两个日期之间的天数，如果两个日期是连续的我们规定他们之间的天数为两天。

输入：
有多组数据，每组数据有两份，分别表示两个日期。
形式为YYYYMMDD

输出：
每组数据出处一行，即日期差值。

输入样例：
20130101
20130105

输出样例：
5
*/
#include <iostream>
using namespace std;

int months[13][2] {
    {0, 0},
    {31, 31},
    {28, 29},// 平年2月 闰年2月
    {31, 31},
    {30, 30},
    {31, 31},
    {30, 30},
    {31, 31},
    {31, 31},
    {30, 30},
    {31, 31},
    {30, 30},
    {31, 31}
};

int isLeap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ) {
        return 1;// 闰年的列号
    } else {
        return 0;// 平年的列号
    }
}

int main() {
    int temp1, temp2, y1, m1, d1, y2, m2, d2;
    while (cin >> temp1 >> temp2) {
        if (temp1 > temp2) {// 让temp2始终大于temp1
            int temp = temp1;
            temp1 = temp2;
            temp2 = temp;
        }
        // 提取年月日（背！）
        y1 = temp1 / 10000;
        m1 = temp1 % 10000 / 100;
        d1 = temp1 % 100;
        y2 = temp2 / 10000;
        m2 = temp2 % 10000 / 100;
        d2 = temp2 % 100;
        int days = 1;
        // 数天数
        while (y1 < y2 || m1 < m2 || d1 < d2) {
            d1++;
            if (d1 == months[m1][isLeap(y1)] + 1) {
                ++m1;
                d1 = 1;
            }
            if (m1 == 13) {
                ++y1;
                m1 = 1;
            }
            ++days; // 核心的天数计数器
        }
        cout << days << endl;
    }
    return 0;
}