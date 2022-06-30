/**
 * @file 38.cpp 数列有序！
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
    有n（n < 100）个整数，已经按照从小到大顺序排列好，现在另外给一个整数m，请将概述插入到序列中，并使新的序列仍然有序。
Input:
    输入数据包含多个测试实例，每组数据由两行组成，第一行是n和m，第二行是已经有序的n个数的数列。
    n和m同时为0表示输入数据的结束，本行不做处理。
Output:
    对于每个测试实例，输入插入新的元素后的数列。

Sample Input:
3 3
1 2 4
0 0

Sample Output:
1 2 3 4
*/
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[]) {
    int n, m;
    while (cin >> n >> m && (n || m )!= 0) {
        getchar();
        int *p = new int[100];
        int t;
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        for (int j = 0; j < n; j++) {
            if (m >= p[j]) {
                continue;
            } else {
                t = j;
            }
        }

        for (int k = n + 1; k > t; k--) {
            p[k] = p[k - 1];
        }
        p[t] = m;

        for (int i = 0; i < n; i++) {
            cout << p[i] << " ";
        }
        cout << p[n] << endl;
    }
    return 0;
}