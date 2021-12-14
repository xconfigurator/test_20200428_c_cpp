/**
 * @file LC217Set.cpp
 * @author liuyang
 * @brief set版本 效率不高，但简单。充分利用了STL set的特点。
 * 
 * 题目：
 * https://leetcode-cn.com/problems/contains-duplicate/
 * 
 * @version 0.1
 * @date 2021-12-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> myset;
        pair<set<int>::iterator, bool> ret;
        for (int i = 0; i < nums.size(); ++i) {
            ret = myset.insert(nums[i]);
            if (!ret.second) {
                return true; 
            }
        }
        return false;
    }
};