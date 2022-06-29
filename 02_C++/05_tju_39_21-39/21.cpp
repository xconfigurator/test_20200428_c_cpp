/**
 * @file 21.cpp 第几天？
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*
Problem Description:
    给定一个日期，输出这个日期是该年的第几天。

Input:
    输入数据有多组，每组占一行，数据格式为YYYY/MM/DD组成， 具体参见Sample Input。
    另外，可以向你确保左右的输入数据是合法的。

Output:
    对于每组输入数据，输出一行，表示该日期是该年的第几天。

Sample Input:
1985/1/20
2006/3/12

Sample Output:
20
71
*/
#include <iostream>
using namespace std;

int isLeap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main(int argc, char const *argv[]) {
    int a[2][12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,
                    31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year, month, day, p, q;

    while (scanf("%d%c%d%c%d", &year, &p, &month, &q, &day) != EOF) {// 字符串输入方法
        if (isLeap(year)) {
            for (int i = 0; i < month - 1; i++) {
                day += a[0][i];
            }
            cout << day << endl;
        } else {
            for (int i = 0; i < month - 1; i++) {
                day += a[1][i];
            }
            cout << day << endl;
        }
    }

    return 0;
}