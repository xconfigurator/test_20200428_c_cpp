/**
 * @file LC203.cpp
 * @author liuyang
 * @brief 链表练习
 * https://leetcode-cn.com/problems/remove-linked-list-elements/
 * 在LeetCode上调试。
 * 
 * 参考：
 * 1. 看浙大何钦铭老师讲解 2.1.5 链式存储的插入和删除 04:23开始。
 * 2. 饲养员讲的这个dummy节点的方法解本题很好。https://www.bilibili.com/read/cv8585621?spm_id_from=333.999.0.0
 * 
 * @version 0.1
 * @date 2021-12-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
//using namespace std;

/**
 * Definition for singly-linked list.
 * 
 */
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* p = dummy;// 当前要处理节点的前面一个节点
        ListNode* s = head; // 当前要处理节点
        while ( s != NULL) {
            if (val == s->val) {
                p->next = s->next;
                //delete s; // 加上这句出错，不加这句可以通过，但真的没问题么？！
            } else {
                p = s;
            }
            s = s->next;
        }
        return dummy->next;
    }
};
