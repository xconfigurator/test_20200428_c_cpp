/**
 * @file 22.cpp 求奇数的乘积
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
    给你n个整数，求他们中所有奇数的乘积。

Input:
    输入数据包含多个测试实例，每个测试实例占一行，每行的第一个数为n，表示本组数据一共有n个，接着是n个整数，你可以假设每组数据必定至少存在一个奇数。

Output:
    输出每组数据中的所有奇数的乘积，对于测试实例，输出一行。

Sample Input:
3 1 2 3
4 2 3 4 5

Sample Output:
3
15
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int n;
    while (cin >> n) {
        int *p = new int[n]; // 动态分配数组
        int m = 1;
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        for (int i = 0; i < n; i++) {
            if (p[i] % 2 == 1) m *= p[i];          
        }
        cout << m << endl;
    }
    return 0;
}
