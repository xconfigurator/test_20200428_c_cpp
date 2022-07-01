/**
 * @file PermutationNextK.cpp
 * @author your name (you@domain.com)
 * @brief 排列 （模拟） 《程序设计导引及在线实践（第2版)》 P130 
 * 
 * @version 0.1
 * @date 2021/2/19
 * 
 * @copyright Copyright (c) 2021
 * 
 */
/*
问题描述：
    给出正整数n, 则1 ~ n这n个数可以构成n!种排列，把这些排列按照从小到大的顺序（字典顺序）列出，
    
    如n = 3时， 列出1 2 3， 1 3 2， 2 1 3， 2 3 1， 3 1 2， 3 2 1工6个排列。
    给出某个排列，求出这个排列的下k个排列，如果遇到最后一个排列，则下1排列为第1个排列，即排列出1 2 3 ... n。

    例如，n = 3, k = 2, 给出排列 2 3 1，则它的下1个排列为 3 1 2， 下2个排列为3 2 1， 因此答案为3 2 1。

输入数据：
    第一行是一个正整数m，表示测试数据的个数。
    下面是m组测试数据，每组测试数据第一行是2个正整数n(1 <= n < 1024)和k(1 <= k <= 64),
    第二行有n个正整数，是1, 2, ..., n的一个排列。

输出要求：
    对于每组输入数据，输出一行，n个数，中间用空格隔开， 表示输入排列的下k个排列。

输入样例：
3
3 1
2 3 1
3 1
3 2 1
10 2
1 2 3 4 5 6 7 8 9 10

输出样例：
3 1 2
1 2 3
1 2 3 4 5 6 7 9 8 10

*/
#include <stdio.h>
#include <stdlib.h>
#define MAX_NUM 1024
int an[MAX_NUM + 10];

// 用以排序的比较函数
int MyCompare(const void *e1, const void *e2) {
    return *((int *) e1) - *((int *) e2);
}

int main(int argc, char const *argv[]) {
    int M;
    int n, k, i, j;
    scanf("%d", &M);
    for (int m = 0; m < M; m++) {
        scanf("%d%d", &n, &k);
        // 排列存放在an[1]...an[n]
        for (i = 1; i <= n; i++) {
            scanf("%d", &an[i]);
        }
        an[0] = 100000;             // 确保an[0]比排列中所有的数都大
        for (i = 0; i < k; i++) {   // 每次循环都找出下一个排列
            for (j = n; j >= 1 && an[j - 1] > an[j]; j--) ;
            if (j >= 1) {
                int nMinLarger = an[j];
                int nMinIdx = j;
                // 下面找出董an[j]及其后最小的比an[j - 1]大的元素，并记住其下标
                for (int kk = j; kk <= n; kk ++) {
                    if (nMinLarger > an[kk] && an[kk] > an[j - 1]) {
                        nMinLarger = an[kk];
                        nMinIdx = kk;
                    }
                }
                // 交换位置
                an[nMinIdx] = an[j - 1];
                an[j - 1] = nMinLarger;
                qsort(an + j, n - j + 1, sizeof(int), MyCompare);// 排列
            } else {
                // an里面的排列已经是降序了，那么下一个排列数就是 1 2 3 ... n
                for (j = 1; j <= n; j++) {
                    an[j] = j;
                }
            }
        }
        for (j = 1; j <= n; j++) {
            printf("%d ", an[j]);
        }
        printf("\n");
    }
    return 0;
}

// 20220701150 测试ok