/**
 * @file 25.cpp 水仙花数
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
    “水仙花数”是指一个三位数，它的各位数字的立方和等于其本身，比如： 153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3
Input:
    输入数据有多组，每组占一行，包括两个整数m和n(100 <= m <= n <= 999)
Output:
    对于每个测试实例，要求输出所有在给定范围内的水仙花数，就是说，输出的水仙花数必须大于等于m并且小于等于n.
    如果有多个，则要求从小到大排列在一行内输出，之间用一个空格隔开；
    如果给定的范围内不存在水仙花数，则输出no；
    每个测试实例的输出占一行。
Sample Input:
100 120
300 380

Sample Output:
no
370 371
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[]) {
    int m, n;
    while (cin >> m >> n && n >= m) {
        int flag = 0;
        for (int i = m; i <= n; i++) {
            int p[3], sum = 0, q = i;
            for (int j = 0; j < 3; j++) {
                p[j] = q % 10;
                q = q / 10;
            }
            for (int j = 0; j < 3; j++) {
                sum += pow(p[j], 3);
            }
            if (sum == i) {
                if (flag >= 1) {
                    cout << " " << sum;
                } else {
                    cout << sum;// 两数有空格，用标志位控制。
                }
                flag++;
            }
        }
        if (flag == 0) {
            cout << "no" << endl;
        } else {
            cout << endl;
        }
    }
    return 0;
}