/**
 * @file array01.cpp
 * @author liuyang
 * @brief 输入四个数字再反序输出
 * @version 0.1
 * @date 2021-11-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;

const int NUM = 4;

int main(int argc, char const *argv[]) {
    int a[NUM] = {0};
    for (int i = 0; i < NUM; ++i) {
        // cin >> a[i];
        scanf("%d", &a[i]);
    }
    for (int i = NUM - 1; i >= 0; --i) {
        cout << a[i] << "\t";
    }
    cout << endl;
    return 0;
}