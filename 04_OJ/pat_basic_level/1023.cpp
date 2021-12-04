/**
 * @file 1023.cpp
 * @author 组个最小数
 * @brief 贪心法练习 
 * 
 * 题目：
 * https://pintia.cn/problem-sets/994805260223102976/problems/994805298269634560
 * 说明：
 * 1. 听视频讲解撸代码，体会贪心的意思，以及对代码的控制能力。
 * 2. 思路就是把小的数字尽可能靠前输出。但注意题目有约束0不能作为开始。
 * OJ状态：答案正确
 * 
 * @version 0.1
 * @date 2021-12-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int num[10];
    for (int i = 0; i < 10; ++i) {
        cin >> num[i];
    }
    int k = 1;
    while (0 == num[k]) ++k;                    // 找出第一个不为0的数字
    for (int i = k; i < 10; ++i) {
        if (i == k) {
            cout << i;                          // 先输出一个最小的不为0的数
            for (int j = 0; j < num[0]; ++j) {  // 把可能存在的0都输出
                cout << 0;
            }
            for (int j = 1; j < num[i]; ++j) {  // 把最小的不为0的数都输出  
                cout << i;
            }
        } else {
            for (int j = 0; j < num[i]; ++j) {  // 然后把后面有的数字从小到大依次输出
                cout << i;
            }
        }
    }
    return 0;
}