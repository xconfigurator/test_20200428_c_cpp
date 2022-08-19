/**
 * @file 1.7.1.c
 * @author your name (you@domain.com)
 * @brief 全排列 不保证字典序的全排列算法
 * @version 0.1
 * @date 2022-08-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

#define MAXN 9

void Swap(int L[], int i, int j) {
    /* 交换L[i]和L[j] */
    int Tmp = L[i];
    L[i] = L[j];
    L[j] = Tmp;
}

void Permutation(int L[], int Left, int Right) {
    /* 递归处理从L[Left]到L[Right]的全排列 */
    int i;
    if (Left == Right) {                        /* 如果只剩一个数字，就输出当前的一组排列 */
        for (i = 0; i <= Right; ++i) {
            printf("%d", L[i]);
        }
        printf("\n");
    } else {
        for (i = Left; i <= Right; ++i) {
            Swap(L, Left, i);                   /* 跳出第i个数字， 交换到最左边 */
            Permutation(L, Left + 1, Right);    /* 递归解决剩余问题 */
            Swap(L, Left, i);                   /*  */
        }
    }
}

int main() {
    int N, L[MAXN], i;

    scanf("%d", &N);
    for (i = 0; i < N; ++i) {
        L[i] = i + 1;/* 将 1 ~ N顺序存入数组 */
    }
    Permutation(L, 0, N - 1);
    return 0;
}