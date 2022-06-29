/**
 * @file 17.cpp 统计字符数
 * @author your name (you@domain.com)
 * @brief 
 * 我们现在使用的日历中，闰年被定义为能被4整除的年份，但是能被100整除而不能被400整除的年份是例外，他们不是闰年。
 * 例如：1700, 1800和1900不是闰年，而1600和2000是闰年。
 * 给定从2000年1月1日开始逝去的天数，请编程给出这一天是哪年哪月哪日星期几。
 * 
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*
输入描述：
    输入包含若干行，每行包含一个正整数，表示从2000年1月1日开始逝去的天数。输入最后一行是-1，不必处理。
    可以假设结果的年份不会超过9999。
输出描述:
    每个测试样例输出一行，该行包含对应的日期和星期几。
    格式为“YYYY-MM-DD DayOfWeek”
    其中“DayOfWeek”必须是下面的一个：Sunday, Monday, Tuesday, Wednesday, Thursday, Friday和Saturday
输入样例：
1730
1740
1750
1751
-1
输出样例：
2004-9-26 Sunday
2004-10-6 Wednesday
2004-10-16 Saturday
2004-10-17 Sunday
*/
#include <iostream>
using namespace std;

int type(int m) {
    // 判断第m年是否是闰年，是则返回1，否则返回0
    return (m % 4 != 0 || (m % 100 == 0 && m % 400 != 0)) ? 0 : 1;
}

char week[7][10] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

int year[2] = {365, 366}; //year[0]表示非闰年天数， year[1]表示闰年天数

int month[2][12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,
                    31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(int argc, char const *argv[]) {
    int days, dayofweek;    // days表示输入的天数，dayofweek表示星期几
    int i = 0, j = 0;

    while (cin >> days && days != -1) {
        dayofweek = days % 7;
        
        for (i = 2000; days >= year[type(i)]; ++i) {
            days -= year[type(i)];
        }

        for (j = 0; days >= month[type(1)][j]; ++j) {
            days -= month[type(i)][j];
        }

        cout << i << "-" << j + 1 << "-" << days + 1 << " " << week[dayofweek] << endl;
    }
    return 0;
}