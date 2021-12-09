/**
 * @file LC206.cpp
 * @author liuyang
 * @brief 链表练习
 * https://leetcode-cn.com/problems/reverse-linked-list/
 * 头插版本 
 * 
 * 参考：
 * 1. 看浙大陈越老师讲解（一个更普通的版本）。当然也可以使用头插的方式。
 * 2. 饲养员头插解法。（提示，一定要配合手画图，不然很容易写错!）https://www.bilibili.com/read/cv8585621?spm_id_from=333.999.0.0
 * 
 * @version 0.1
 * @date 2021-12-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
/**
 * Definition for singly-linked list.
 */
#include <iostream>
//using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* p = head;
        while (p != NULL && p->next != NULL) {
            ListNode* dnext = dummy->next;
            ListNode* pnext = p->next;
            dummy->next = pnext;
            p->next = pnext->next;
            pnext->next = dnext;
        }
        return dummy->next;
    }    
};
