/**
 * @file LC27.cpp
 * @author liuyang
 * @brief 数组练习 
 * 27. 移除元素（双指针算法）
 * https://leetcode-cn.com/problems/remove-element/
 * 有点像快速排序的的时候那个划分的过程。
 * 可以再听一听视频讲解。
 * 
 * 参考：
 * https://www.bilibili.com/read/cv8223815?from=articleDetail
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
    int removeElement(vector<int>& nums, int val) {
        if (nums.size() == 0) {
            return 0;
        }
        int l = 0;
        int r = nums.size() -1;
        while (l < r) {
            while (l < r && nums[l] != val) l++;// l的位置是第一个val的位置
            while (l < r && nums[r] == val) r--;// r的位置是最后一个val的位置-1
            int tmp = nums[l];
            nums[l] = nums[r];
            nums[r] = tmp;
        }
        return nums[l] == val ? l : l + 1;
    }
};
