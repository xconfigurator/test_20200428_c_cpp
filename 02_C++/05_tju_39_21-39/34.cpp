/**
 * @file 34.cpp 蟠桃记
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
    孙悟空研究蟠桃一共有多少个。不过到最后他还是没能解决这个难题。
    当时的情况：
    第一天悟空吃掉桃子总数一半多一个，第二天又将剩下的桃子吃掉一半U多一个，以后每天吃掉前一天剩下的一半多一个，到第n天准备吃的时候只剩下一个桃子。
    聪明的你，请帮悟空算一下，他第一天开始吃的时候桃子一共有多少个呢？
Input:
    输入数据有多组，每组占一行，包含一个正整数n (1 < n < 30)， 表示只剩下一个桃子的时候是在第n天发生的。
Output:
    对于每组输入数据，输出第一天开始吃的时候桃子的总数，每个测试实例占一行。

Sample Input:
2
4

Sample Output:
4
22 
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int day, sum, i;
    while (cin >> day) {
        sum = 1;
        for (i = day; i > 1; i--) {
            sum = (sum + 1) * 2;
        }
        printf("%d\n", sum);
    }
    return 0;
}