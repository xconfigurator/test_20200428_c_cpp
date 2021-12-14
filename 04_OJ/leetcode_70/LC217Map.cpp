/**
 * @file LC217Map.cpp
 * @author 题目
 * @brief map版本，效率不高，但是常练！使用STL map做词频统计。
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
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> m;
        map<int, int>::iterator it;
        for (int i = 0; i < nums.size(); ++i) {
            pair<int, int> p(nums[i], 1);
            if ((it = m.find(nums[i])) == m.end()) {
                m.insert(p);
            } else {
                (*it).second ++;
            }
        } 
        for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
            if ((*it).second > 1) return true;
        }
        return false;
    }
};