/**
 * @file LC215HeapPriorityQueue.cpp
 * @author liuyang
 * @brief 
 * 215. 数组中的第K个最大元素 (PriorityQueue版本)
 * 
 * 问题:
 * https://leetcode-cn.com/problems/kth-largest-element-in-an-array/
 * 
 * 
 * @version 0.1
 * @date 2021-12-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <queue>
#include <vector>
using namespace std;

// priority_queue版本
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // STL make_heap 默认调整的都是大顶堆。若需要调整成小顶堆需要在泛型中指定greater<int>;
        priority_queue<int, vector<int>> heap;
        for (int i = 0; i < nums.size(); ++i) {
            heap.push(nums[i]);
        }
        // 堆顶前k-1个元素
        for (int i = 0; i < k - 1; ++i) {
            heap.pop();
        }
        // 堆顶第k个
        return heap.top();
    }
};