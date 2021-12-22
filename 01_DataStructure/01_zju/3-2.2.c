/**
 * @file 3-2.2.c
 * @author liuyang
 * @brief 
 * 题目：
 * https://pintia.cn/problem-sets/988034414048743424/problems/type/6
 * 实验指导 基础实验3-2.2 单链表分段逆转
 * 
 * 视频：
 * 题目说明
 * http://www.icourse163.org/learn/ZJU-93001?tid=120001#/learn/content?type=detail&id=504003&cid=535006&replay=true
 * 过程解析（6分钟，多看几次就ok）
 * http://www.icourse163.org/learn/ZJU-93001?tid=120001#/learn/content?type=detail&id=504003&cid=537004&replay=true
 *  
 * @version 0.1
 * @date 2021-12-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
/*
// 伪代码描述 单链表逆转的模板。
Ptr Reverse(Ptr head, int K) {
    cnt = 1;
    new = head->next;
    old = new->next;
    while (cnt < K) {
        tmp = old->next;    // 记住下一步的位置
        old->next = new;    // 逆转
        new = old;          // 前移
        old = tmp;          
        cnt ++;
    }
    head->next->next = old;
    return new;
}
*/
