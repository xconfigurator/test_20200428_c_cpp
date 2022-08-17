/**
 * @file BinarySearch.c
 * @author your name (you@domain.com)
 * @brief 二分查找 - 递归实现
 * 《数据结构学习与实验指导》（第2版） p6
 * @version 0.1
 * @date 2022-08-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#define MAXSIZE 10000

typedef int Position;
typedef int ElementType;
typedef struct LNode *List;
struct LNode {
    ElementType Data[MAXSIZE];  
    Position Last;              /* 保存数组Data[]中的最后一个元素的位置 */
};

Position BinarySearchRecursive(List L, ElementType X, Position Left, Position Right) {
    /* Left和Right分别是当前要处理的L->Data[]中最左和最右的下标值 */
    if (Left > Right) {         /* 如果当前范围内没有元素了 */
        return -1;              /* 返回查找不成功的标志 */
    }

    Position Mid = (Left + Right) / 2;   /* 计算中间元素坐标 */
    if (L->Data[Mid] > X) {         
        return BinarySearchRecursive(L, X, Left, Mid - 1);  /* 在左边的子系列中查找 */
    } else if (L->Data[Mid] < X) {  
        return BinarySearchRecursive(L, X, Mid + 1, Right); /* 在右边的子系列中查找 */
    } else {
        /* L->Data[Mid] == X */
        return Mid;                                         /* 查找成功， 返回数据元素的下标 */
    }
}

Position BinarySearchFrontEnd(List L, ElementType X) {
    return BinarySearchRecursive(L, X, 1, L->Last);
}

int main() {
   // TODO
   return 0;
}