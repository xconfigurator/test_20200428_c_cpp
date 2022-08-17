/**
 * @file 1.5.c
 * @author your name (you@domain.com)
 * @brief 递增的整数序列链表的插入

 * @version 0.1
 * @date 2022-08-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#define ElementType int

typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;   /* 存储节点数据 */
    PtrToNode Next;     /* 指向下一个节点的指针 */
};
typedef PtrToNode List; /* 定义单链表类型 */

List Insert(List L, ElementType X) {
    List Pre, Tmp;

    Pre = L;            /* 前驱节点从头结点开始 */
    while (Pre->Next) { /* 当Pre的下一个节点存在时 */
        if (X < Pre->Next->Data) {
            break;      /* 找到第一个比X大的结点 */
        } else {
            Pre = Pre->Next;
        }
    }
    Tmp = (PtrToNode) malloc(sizeof(struct Node));
    Tmp->Data = X;      /* 建立X结点 */
    Tmp->Next = Pre->Next;
    Pre->Next = Tmp;    /* 将X插入Pre后一个位置 */

    return L;
}

int main(){
    // TODO
    return 0;
}