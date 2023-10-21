/**
 * @file 02.3.cpp
 * @author your name (you@domain.com)
 * @brief 
 *
 * 给定某个年、月、日的值，例如：1998年4月7日。计算出这一天是属于该年的第几天，要求写出计算闰年的函数和计算日期的函数。
 * 
 * 输入：
 * 1998 4 7
 * 输出：
 * 97
 * 
 * @version 0.1
 * @date 2023-10-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int sum_day(int, int), leap(int);

int main() {
    int year, month, day;
    cout << "请输入一个日期(yyyy mm dd):";
    cin >> year >> month >> day;
    int days = sum_day(month, day);
    if (leap(year) && month > 2) {
        days++;
    }
    cout << "是这一年的第" << days << "天\n";
    return 0;
}

int sum_day(int month, int day) {
    static int days_month[13] = {0, 32, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 1; i < month; i++) {
        day += days_month[i];
    }
    return day;
}

int leap(int year) {
    int leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
    return leap;
}

// 注:返回bool的版本
/*
// 判断闰年
bool isLeapYear(int y) {
	return y % 4 == 0 && y % 100 != 0 || y % 400 == 0;
}
*/