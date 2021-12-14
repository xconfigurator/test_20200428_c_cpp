/**
 * @file LC496StackHashTable.cpp
 * @author liuyang
 * @brief 栈 + 哈希表
 * 496. 下一个更大元素 II
 * 视频：
 * https://www.bilibili.com/video/BV1sy4y1q79M?p=29 （栈 + 哈希表）（优选）
 * 思路：先用nums2构建一个hashtable，形成keyset = nums2中所有元素，对应的value是下一个比该元素大的值的位置。
 * 这样，统计完成之后就可以直接根据nums1的每个值来查这张哈希表而得到结果了。
 * 
 * 进阶：你可以设计一个时间复杂度为 O(nums1.length + nums2.length) 的解决方案吗？
 * 答：貌似这个方案就是！
 * 
 * 参考：
 *  https://www.bilibili.com/read/cv8687919 （双栈版本）
 * 
 * 
 * @version 0.1
 * @date 2021-12-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <vector>
#include <stack>
#include <map>
using namespace std;

// 听视频讲解，把讲解的话翻译成代码即可。多练习。
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        map<int, int> m;
        stack<int> s;

        // 扫描nums2建表
        for (int i = 0; i < nums2.size(); i++) {
            if (s.empty()) {
                s.push(nums2[i]);
                continue;
            } 
            if (!s.empty() && s.top() > nums2[i]) {
                s.push(nums2[i]);
                continue;
            }
            if (!s.empty() && s.top() < nums2[i]) {
                while (!s.empty() && s.top() < nums2[i]) {
                    m.insert(make_pair(s.top(), nums2[i]));// s.top()的下一个更大的值是num2[i]
                    s.pop();
                }
                s.push(nums2[i]);
            } 
        }
        while (!s.empty()) {
            m.insert(make_pair(s.top(), -1));
            s.pop();
        }

        // 扫描nums1给出结果
        for (int i = 0; i < nums1.size(); ++i) {
            result.push_back(m[nums1[i]]);
        }

        return result;
    }
};
