/**
 * @file 1.2.1.c
 * @author your name (you@domain.com)
 * @brief 数组元素循环左移 方案一
 * @version 0.1
 * @date 2022-08-09
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
 * @copyright Copyright (c) 2022
 * 
 */
 #include <stdio.h>
 #define MAXN 100

 void Shift(int Array[], int N);

 int main() {
    int Number[MAXN], N, M;
    int i;

    scanf("%d%d", &N, &M);
    for (i = 0; i < N; ++i) {
        scanf("%d", &Number[i]);
    }
    M %= N; /* 当M大于等于N时转换成等价的小于N的数 */
    for (i = 0; i < M; ++i) {
        Shift(Number, N);           /* N个元素循环位移1位 */
    }
    for (i = 0; i < N - 1; ++i) {   /* 打印输出 */
        printf("%d ", Number[i]);
    }
    printf("%d\n", Number[N - 1]);
    return 0;
 }

 void Shift(int Array[], int N) {
    int i, ArrayHead;

    ArrayHead = Array[0];
    for (i = 0; i < N - 1; ++i) {   /* N个元素循环位移1位 */
        Array[i] = Array[i + 1];
    }
    Array[N - 1] = ArrayHead;
 }