/**
 * @file LC509.cpp
 * @author liuyang
 * @brief 递归练习/动态规划入门题
 * 509. 斐波那契数
 * https://leetcode-cn.com/problems/fibonacci-number/
 * 
 * 初始状态：
 * F(0) = 0
 * F(1) = 1
 * 状态转移方程：
 * F(n) = F(n - 1) + F(n - 2)
 * 动态规划数组：
 * 就是斐波那契数列本身
 * 
 * 参考：
 * 1. 饲养员讲解 https://www.bilibili.com/video/BV1sy4y1q79M?p=78 
 * 2. 清华程序设计基础讲解 https://www.bilibili.com/video/BV1uE411F7g9?p=95&spm_id_from=pageDriver
 * 
 * @version 0.1
 * @date 2021-12-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>

class Solution {
public:
    int fib(int n) {
        if (0 == n) return 0;
        if (1 == n) return 1;
        int result = 1;
        int *dp = new int[n + 1];
        dp[0] = 0;
        dp[1] = 1;
        for (int i = 2; i < n + 1; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        result = dp[n];
        delete[] dp;
        return result;
    }
};