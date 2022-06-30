/**
 * @file 35.cpp 青年歌手大奖赛 评委会打分
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
    去掉一个最高分和一个最低分，然后计算平均得分。
Input:
    输入数据有多组，每组站一行，每行第一个数是n (2 < n <= 100) 表示评委的人数，然后是n个评委打分。
Output:
    对于每组输入，输出选手额得分，结果保留2位小数，每组输出占一行。

Sample Input:
3 99 98 97
4 100 99 98 97

Sample Output:
98.00
98.50
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[]) {
    int n;
    while (cin >> n) {
        float *p = new float[n];
        float sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        sort(p, p + n);
        for (int j = 1; j < n - 1; j++) {
            sum += p[j];
        }
        printf("%0.2f\n", sum / (n - 2));
    }
    return 0;
}