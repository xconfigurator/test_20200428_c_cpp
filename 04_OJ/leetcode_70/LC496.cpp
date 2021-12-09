/**
 * @file LC469.cpp
 * @author liuyang
 * @brief 栈练习题（使用两个栈）
 * 496. 下一个更大元素 I
 * https://www.bilibili.com/read/cv8687919
 * 
 * 
 * 参考：
 * https://www.bilibili.com/read/cv8687919
 * 
 * @version 0.1
 * @date 2021-12-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> results;                    // 存放位置计算的结果。nums1是nums2的子集。
        stack<int> mystack;                     // 用于存放nums2元素
        stack<int> mystacktmp;                  // 用于辅助恢复mystack使用
        
        // 初始化mystack
        for (int i = 0; i < nums2.size(); ++i) {
            mystack.push(nums2[i]);
        }

        // 遍历nums1，并逐个计算结果
        for (int i = 0; i < nums1.size(); ++i) {
            bool isFound = false;
            int curr = nums1[i];                // 当前要查找的字符
            int greater = -1;                   // 下一个更大的数字
            while (!mystack.empty() && !isFound) {
                int top = mystack.top();
                mystack.pop();
                if (top > curr) {
                    greater = top;              // 备选值
                } else if (top == curr) {
                    isFound = true;             // 已经在nums2中倒序找到了当前要查找的值，查找结束。greater中就是结果。
                } else {// top < curr
                    // 并不需要更改标记
                }
                mystacktmp.push(top);           // nums2中值为top的数字已经检查过
            }
            results.push_back(greater);               // 记录结果
            while (!mystacktmp.empty()) {       // 恢复存放nums2数据的栈mystack的现场
                mystack.push(mystacktmp.top());
                mystacktmp.pop();
            }
        }

        return results;
    }
};
