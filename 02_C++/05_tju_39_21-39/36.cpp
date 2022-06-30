/**
 * @file 36.cpp 数据的交换输出
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
    输入n(n < 100)个数, 找出其中最小的数，将它与最前面的数交换后输出这些数。
Input:
    输入数据有多组，每组占一行，每行的开始是一个整数n, 表示这个测试实例的数值的个数， 跟着就是n个整数。
    n=0表示输入的结束，不做处理。
Output:
    对于每组输入数据，输出交换后的数列，每组输出占一行。

Sample Input:
4 2 1 3 4
5 5 4 3 2 1

Sample Output:
1 2 3 4
1 4 3 2 5
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int n;
    while (cin >> n && (n != 0)) {
        int *p = new int[100];
        int temp, min = 0;
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        for (int j = 0; j < n; j++) {
            if (p[j] < p[min]) min = j;
        }
        temp = p[min];
        p[min] = p[0];
        p[0] = temp;

        for (int k = 0; k < n - 1; k++) {
            cout << p[k] << " ";
        }
        cout << p[n - 1] << endl;
    }
    return 0;
}
