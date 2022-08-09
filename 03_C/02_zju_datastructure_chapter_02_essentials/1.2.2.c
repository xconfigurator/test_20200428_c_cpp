/**
 * @file 1.2.2.c
 * @author your name (you@domain.com)
 * @brief 数组元素循环左移 方案二
 * @version 0.1
 * @date 2022-08-09
 * 
 * @copyright Copyright (c) 2022
 * 
测试数据：
第一组：
8 3
1 2 3 4 5 6 7 8
第二组：
6 8
1 2 3 4 5 6
第三组：
3 6
11 23 56
第四组：
1 0
8
 */
 #include <stdio.h>

 #define MAXN 100
 #define Swap(a, b) a ^= b, b ^= a, a ^= b;
 /* 通过三次抑或运算交换a与b */

 void LeftShift(int Array[], int N, int M);

 int main() {
    int Number[MAXN], N, M;
    int i;

    scanf("%d %d", &N, &M);
    for (i = 0; i < N; ++i) {
        scanf("%d", &Number[i]);
    }
    M %= N;                     /* 当M大于等于N时转化成等价的小于N的数 */
    LeftShift(Number, N, M);    /* 循环左移M位 */
    printf("%d", Number[0]);    /* 打印输出 */
    for (i = 1; i < N; i++) {
        printf(" %d", Number[i]);
    }
    printf("\n");
    return 0;
 }


void LeftShift(int Array[], int N, int M) {
    int i, j;

    if (M > 0 && M < N) {
        /* 逆转N个数据 */
        for (i = 0, j = N - 1; i < j; ++i, --j) {
            Swap(Array[i], Array[j]);
        }
        /* 逆转前N-M个数据 */
        for (i = 0, j = N - M - 1; i < j; ++i, --j) {
            Swap(Array[i], Array[j]);
        }
        /* 逆转厚M个数据 */
        for (i = N - M, j = N - 1; i < j; ++i, --j) {
            Swap(Array[i], Array[j]);
        }
    }
}