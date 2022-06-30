/**
 * @file 039.cpp Lowest Common Multiple Plus
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
    求n个数的最小公倍数。
Input:
    输入包含多个测试实例，每个测试实例的开始是一个正整数n, 然后是n个正整数。
Output:
    为每组测试数据输出他们的最小公倍数，每个测试实例的输出占一行。
    你可以假设最后的输出是一个32位的整数。

Sample Input:
2 4 6
3 2 5 7

Sample Output:
12
70
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int i, n, a;
    int *s = new int[100];
    while (cin >> n && n != 0) {
        a = 0;
        for (i = 1; i <= n; i++) {
            cin >> s[i];
            if (a < s[i]) a = s[i];
        }

        // 神一样的求最小公倍数的方法
        for (i = 1; i <= n; i++) {
            if (a % s[i] != 0) {
                a++;
                i = 0;
            }
        }
        cout << a << endl;
    }

    return 0;
}