/*
4.5.c 判断闰年
输入一个年份， 判断该年份是否是闰年。

说明：
闰年符合下面两个条件之一：
该年能被4整除，但不能被100整除。
该年份能被4整除，又能被400整除。

@since 2021/2/16
*/
#include "stdio.h"
int main() {
    int year;
    printf("Please input a year: \n");
    scanf("%d", &year);
    /*判断是否是闰年*/
    if ((year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0)) {
        // year % 400 == 0 必然有 year % 4 == 0
        printf("%d is leap year!\n", year);
    } else {
        printf("%d is not leap year!\n", year);
    }
}