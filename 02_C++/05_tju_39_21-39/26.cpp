/**
 * @file 26.cpp 多项式求和 
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
    多项式的描述如下：
        1 - 1/2 + 1/3 - 1/4 + 1/5 - 1/6 + ...
    请求出该多项式的前n项和。
Input:
    输入数据由2行组成，首先是一个正整数 m (m < 100), 表示测试实例的个数，第二行包含m个正整数， 对于每一个整数（不妨设为n， n < 1000）,求该多项式的前n项和。
Output:
    对于每个实例n, 输出多项式前n项的和。每个测试实例的输出占一行，结果保留2位小数。
Sample Input:
2
1 2

Sample Output:
1.00
0.50
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int m;
    while (cin >> m) {
        int *p = new int[m];
        for (int i = 0; i < m; i++) {
            cin >> p[i];
        }
        for (int i = 0; i < m; i++) {
            float sum = 0;
            int k = -1;
            for (int j = 1; j <= p[i]; j++) {
                k = k * (-1);
                float q = (float) (1.0 / j);
                sum += k * q;
            }
            printf("%0.2f\n", sum);
        }
    }
    return 0;
}