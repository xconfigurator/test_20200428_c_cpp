/*
4.20.c 一年中的第几天
输入某年某月某日，判断这一天是这一年的第几天？

@since 2021/2/16
*/
#include "stdio.h"
int Day(int year, int month, int date);

int main() {
    printf("The days of 6th Match 2009 is %d\n", Day(2009, 3, 6));
    return 0;
}

int Day(int year, int month, int date) {
    int months[13] = {0, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, i, days = 0;
    // 判断是否是闰年
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        months[2] = 29;
    } else {
        months[2] = 28;
    }
    // 开始计算
    for (i = 1; i < month; i++) {
        days += months[i];
    }
    days += date;
    return days;
}