/**
 * @file 1.7.2.c
 * @author your name (you@domain.com)
 * @brief 全排列 保证字典序的全排列算法
 * @version 0.1
 * @date 2022-08-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

#define MAXN 9

void RightShift(int L[], int Left, int i) {
    int j, Tmp = L[i];
    for (j = i; j > Left; --j) {
        L[j] = L[j - 1];
    }
    L[j] = Tmp;
}

void LeftShift(int L[], int Left, int i) {
    int j, Tmp = L[Left];
    for (j = Left; j < i; ++j) {
        L[j] = L[j + 1];
    }
    L[j] = Tmp;
}

void Permutation(int L[], int Left, int Right) {
    /* 递归处理从L[Left]到L[Right]的全排列 */
    int i;
    if (Left == Right) {/* 如果只剩一个数字，输出当前的一组排列 */
        for (i = 0; i <= Right; ++i) {
            printf("%d", L[i]);
        }
        printf("\n");
    } else {
        for (i = Left; i <= Right; ++i) {
            RightShift(L, Left, i);
            Permutation(L, Left + 1, Right);
            LeftShift(L, Left, i);
        }
    }
}

int main() {
    int N, L[MAXN], i;

    scanf("%d", &N);
    for (i = 0; i < N; ++i) {
        L[i] = i + 1;
    }
    Permutation(L, 0, N - 1);
    return 0;
}