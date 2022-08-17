/**
 * @file 1.6.c
 * @author your name (you@domain.com)
 * @brief 两个有序链表序列的合并
 * 本题要求实现一个函数，将两个链表表示的递增数列合并为一个非递减的整数序列。
 * 
 * @version 0.1
 * @date 2022-08-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <cstdlib>
#define ElementType int

typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;   /* 存储节点数据 */
    PtrToNode Next;     /* 指向下一个节点的指针 */
};
typedef PtrToNode List; /* 定义单链表类型 */

// P28 代码2.9
List Merge(List L1, List L2) {
    List L3, Rear;

    L3 = (PtrToNode) malloc(sizeof(struct Node));/* 建头节点 */
    L3->Next = NULL;

    Rear = L3;                                   /* 尾指针初始状态下指向头节点 */
    while(L1->Next && L2->Next) {                /* 当L1和L2都没有背清空时 */
        if(L1->Next->Data < L2->Next->Data) {    /* 如果L1较小 */
            /* 将L1当前节点摘除，复制到L3末尾 */
            Rear->Next = L1->Next;
            L1->Next = L1->Next->Next;
            Rear->Next->Next = NULL;
            Rear = Rear->Next;
        } else {                                 /* 如果L2较小 */
            /* 将L2当前节点拆除，复制到L3末尾 */
            Rear->Next = L2->Next;
            L2->Next = L2->Next->Next;
            Rear->Next->Next = NULL;
            Rear = Rear->Next;
        }
    }
    if (L1->Next) {/* 把L1的剩余链表复制到L3的末尾 */
        Rear->Next = L1->Next;
        L1->Next = NULL;
    }
    if (L2->Next) {/* 把L2的剩余链表复制到L3的末尾 */
        Rear->Next = L2->Next;
        L2->Next = NULL;
    }
    return L3;
}

 int main() {
    // TODO
    return 0;
 }