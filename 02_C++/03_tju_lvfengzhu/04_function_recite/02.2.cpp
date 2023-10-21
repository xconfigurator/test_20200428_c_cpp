/**
 * @file 02.2.cpp
 * @author your name (you@domain.com)
 * @brief 
 *
 * 从键盘输入10个int型数，去掉重复的，将剩余的由大到小排序输出。
 * 
 * 输入：
 * 9 8 7 1 1 2 2 3 3 4
 * 
 * @version 0.1
 * @date 2023-10-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

void sort_bubble(int b[], int n);

int main() {
    int a[10], n = 10;
    cout << "Input 10 integer:";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // 去重
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                a[j] = a[--n];// 注意这个时候n已经缩减了！
                j--;
            }
        }
    }
    // 排序
    sort_bubble(a, n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << ", ";
    }
    cout << '\n';
    return 0;
}

void sort_bubble(int b[], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (b[j] < b[j + 1]) {
                int t = b[j];
                b[j] = b[j + 1];
                b[j + 1] = t;
            }
        }
    }
}