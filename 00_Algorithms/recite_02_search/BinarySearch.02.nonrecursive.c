/**
 * @file BinarySearch.02.nonrecursive.c
 * @author your name (you@domain.com)
 * @brief 二分查找 - 非递归实现
 * 《数据结构学习与实验指导》（第2版） p7
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

Position BinarySearchNonRecursive(List L, ElementType X) {
    /*  在顺序存储的表L中查找关键字为X的数据元素 */
    Position Left, Right, Mid;

    Left = 1;                       /* 初始左边界下标值 */
    Right = L->Last;                /* 初始右边界下标值 */
    while (Left <= Right) {         /* 注意是<= */
        Mid = (Left + Right) / 2;   /* 计算中间元素坐标 */
        if (L->Data[Mid] > X) {
            Right = Mid - 1;
        } else if (L->Data[Mid] < X) {
            Left = Mid + 1;
        } else {
            return Mid;             /* 查找成功，返回数据元素的下标 */
        }
    }
    return -1;                      /* 返回查找不成功的标志 */
}

int main() {

}