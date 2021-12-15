/**
 * @file Lc215HeapAlgorithm.cpp
 * @author 
 * @brief 
  * 215. 数组中的第K个最大元素（算法版本）
 * 
 * 问题:
 * https://leetcode-cn.com/problems/kth-largest-element-in-an-array/
 * 
 * @version 0.1
 * @date 2021-12-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <algorithm>
#include <vector>
using namespace std;

// 算法版本
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // STL make_heap 默认调整的都是大顶堆。若需要调整成小顶堆需要在泛型中指定greater<int>;
        make_heap(nums.begin(), nums.end());
        // 堆顶k - 1个元素
        for (int i = 0; i < k - 1; i++) {
            pop_heap(nums.begin(), nums.end());
            nums.pop_back();
        }
        // 第k个元素
        pop_heap(nums.begin(), nums.end());
        return nums.back();
    }
};