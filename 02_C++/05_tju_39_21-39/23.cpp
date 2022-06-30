/**
 * @file 23.cpp 平方和与立方和
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
    给定一段连续的整数，求出他们中所有偶数的平方和以及所有奇数的立方和。
Input:
    输入数据包含多组测试实例，每组测试实例包含一行，由两个整数m和n组成。
Output:
    对于每组输入数据，输出一行，应包括两个整数x和y，分别表示该段连续的整数中所有偶数的平方和以及所有奇数的立方和。
    你可以认为32位整数足以保存结果。

Sample Input:
1 3
2 5

Sample Output:
4 28
20 152
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m, n;
    while (cin >> m >> n) {
        int sumOdd = 0, sumEven = 0;
        if (m > n) {
            int tmp = m;
            m = n;
            n = tmp;
        }
        for (int i = m; i <=n; i++) {
            if (i % 2 == 1) {// 奇数
                sumOdd += pow(i, 3);
            } else {
                sumEven += pow(i, 2);
            }
        }
        cout << sumEven << " " << sumOdd << endl;
    }
}