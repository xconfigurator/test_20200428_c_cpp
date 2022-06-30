/**
 * @file 33.cpp 素数判定
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*
Problem Description:
    对于表达式n ^ 2 + n + 41, 当n在(x, y)范围内取整数值时(包括x,y)(-39 <= x < y <= 50), 判定该表达式的值是否都为素数。
Input:
    输入数据有多组，每组占一行，由两个整数x, y组成，当x=0,y=0时，表示输入结束，该行不做处理。
Output:
    对于每个给定范围内的取值，如果表达式的值都为素数，则输出“OK”, 否则请输出“Sorry”, 每组输出占一行。

Sample Intput:
0 1
0 0

Sample Output:
OK
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int x, y;
    while (cin >> x >> y && (x || y)) {
        int m;
        int flag = 1;
        for (int i = x; i <= y; i++) {
            m = i * i + i + 41;
            for (int j = 2; j < m; j++) {
                if (m % j == 0) {
                    flag = 0;
                    break;
                } else {
                    continue;
                }
            }
            if (flag == 0) {
                break;
            } else {
                continue;
            }
        }
        if (flag == 1) {
            cout << "OK" << endl;
        } else {
            cout << "Sorry" << endl;
        }
    }
    return 0;
}