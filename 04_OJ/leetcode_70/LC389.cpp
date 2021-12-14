/**
 * @file LC389.cpp
 * @author liuyang
 * @brief 
 * 
 * 题目：
 * https://leetcode-cn.com/problems/find-the-difference/
 * 
 * 在元素确定的情况下，使用数组来实现哈希表。
 * 
 * @version 0.1
 * @date 2021-12-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        char ret = '\0';
        const int HASH_TABLE_SIZE = 26;

        // 哈希表
        char hts[HASH_TABLE_SIZE] = {0}; // 任意小写字母的下标 = [x] - 'a'。 静态初始化，全部置为0。
        char htt[HASH_TABLE_SIZE] = {0};

        // 统计s
        for (int i = 0; i < s.size(); i++) {// size() == length()
            hts[s[i] - 'a']++;
        }

        // 统计t
        for (int i = 0; i < t.length(); ++i) {
            htt[t[i] - 'a']++;
        }

        // 对比
        for (int i = 0; i < HASH_TABLE_SIZE; ++i) {
            if (htt[i] != hts[i]) {// 包含两种情况，一种是htt[i] > hts[i] > 0 (没有新字母), 一种是 htt[i] > hts[i] = 0（有新字母）
                ret = 'a' + i;
                break;
            }
        }

        return ret;
    }
};
