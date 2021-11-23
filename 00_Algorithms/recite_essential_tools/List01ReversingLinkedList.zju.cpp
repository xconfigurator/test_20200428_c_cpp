/**
 * @file List01ReversingLinkedList.zju.cpp
 * @author liuyang
 * @brief 单链表逆置
 * 
 * 视频：
 * https://www.icourse163.org/learn/ZJU-93001?tid=120001#/learn/content?type=detail&id=504003&cid=535006
 * 
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
/*
伪码：
Ptr Reverse(Ptr head, int K) {
    cnt = 1;
    new = head->next;
    old = new->next;
    while ( cnt < K ) {
        temp = old->next;
        old->next = new;
        new = old;
        old = temp;
        cnt ++;
    }
    head->next->next = old;
    return new;
}
*/
