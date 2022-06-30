/**
 * @file 27.cpp 三角形
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
    给定三条边，请你判断一下能不能组成一个三角形。
Input:
    输入数据第一行包含一个数M, 接下来有M行，每行一个实例，包含三个正整数A, B, C.
    其中 A, B, C < 1000
Output:
    对于每个测试实例，如果三条边长 A,B,C能组成三角形的话，输出YES, 否则NO。

Sample Input:
2
1 2 3
2 2 2

Sample Output:
NO
YES
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int m;
    cin >> m;
    while (m--) {
        double a, b, c, flag = 0;// 数据类型为正数，切记！！！
        cin >> a >> b >> c;
        if (a + b > c && a + c > b && b + c > a) {
            flag = 1;
        }
        if (flag == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}