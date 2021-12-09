/**
 * @file LC485.cpp
 * @author liuyang
 * @brief 数组练习 
 * 485. 最大连续 1 的个数
 * https://leetcode-cn.com/problems/max-consecutive-ones/
 * 
 * 参考：
 * https://www.bilibili.com/read/cv8568185
 * 
 * @version 0.1
 * @date 2021-12-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int counter = 0;
        int max = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 1) {
                counter++;
            } else {
                max = max > counter ? max : counter;
                counter = 0;
            }
        }
        //return max; // 注意这样不对！！！
        return max > counter ? max : counter;
    }
};