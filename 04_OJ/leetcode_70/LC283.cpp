/**
 * @file LC283.cpp
 * @author liuyang
 * @brief 数组练习
 * 283. 移动零
 * https://leetcode-cn.com/problems/move-zeroes/
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
    void moveZeroes(vector<int>& nums) {
        int p = 0;
        for (int i = 0; i < nums.size(); ++i) {// 把后面的非零元素移动到前面
            if (nums[i] != 0) {
                nums[p] = nums[i];
                p++;
            }
        }// 这次执行过后p之前的位置已经是原数组中的非零值
        for (int i = p; i < nums.size(); ++i) {// 
            nums[i] = 0;
        }
    }
};