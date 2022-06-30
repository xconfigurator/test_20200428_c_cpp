/**
 * @file 24.cpp 数值统计
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
    统计给定的n个数中，负数、零和正数的个数。

Input:
    输入数据有多组，每组占一行，每行第一个数是整数n(n < 100), 表示要统计的数值的个数，然后是n个实数；
    如果n=0，则表示输入结束，该行不处理。

Output:
    对于每组输入数据，输出一行a, b和c，分别表示给定的数据中负数、零和正数的个数。

Sample Input:
6 0 1 2 3 -1 0
5 1 2 3 4 0.5
0

Sample Output:
1 2 3
0 0 5
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int n;
    while (cin >> n && n != 0) {
        if (n > 0) {
            int a = 0, b = 0, c = 0;
            float *p = new float[n]; // 看好输入的数精度
            for (int i = 0; i < n; i++) {
                cin >> p[i];
            }
            for (int i = 0; i < n; i++) {
                if (p[i] < 0) {
                    a++;
                } else if (p[i] == 0) {
                    b++;
                } else if (p[i] > 0) {
                    c++;
                }
            }
            cout << a << " " << b << " " << c << endl;
        }
    }
    return 0;
}