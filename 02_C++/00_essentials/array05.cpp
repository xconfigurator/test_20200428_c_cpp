/**
 * @file array05.cpp
 * @author liuyang
 * @brief 今天星期几 视频05:28
 * 
 * 要求：已知2012年1月25日是星期三，编写一个程序，输入“年 月 日”表示一个2012年1月25日以后的日期，输出该日期是星期几（星期天输出0）
 * 思路：“已知2012年1月25日是星期三” => 2012年1月22日是星期天。算出给定日期是从改天起过了x天，然后输出x % 7。
 * 提示：用数组替换复杂的分支结构。先算大块，再做调整的思路。
 * 
 * 输入示例：
 * 2015 11 02
 * 
 * 输出示例：
 * 1
 * 
 * @version 0.1
 * @date 2021-11-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;

int monthDays[13] = {-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(int argc, char const *argv[]) {
    int year, month, date;
    int days = 0; // 从2012-01-22日之后过去了多少天。
    cin >> year >> month >> date;
    // 计算整年
    for (int y = 2012; y < year; ++y) {
        if ( y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {// 闰年
            days += 366;
        } else {
            days += 365;
        }
    }
    // 计算月
    if ( year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        monthDays[2] = 29;
    }
    for (int m = 1; m < month; ++m) {
        days += monthDays[m];
    }
    // 计算日
    days += date;
    // 调整：减去2021年1月1日到1月22日这22天减掉
    days -= 22;
    // 输出结果
    cout << days % 7 << endl;
    return 0;
}
