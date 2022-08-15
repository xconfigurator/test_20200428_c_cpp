/**
 * @file 1.3.2.c
 * @author your name (you@domain.com)
 * @brief 数列求和 - 大整数 - 方案二
 * @version 0.1
 * @date 2022-08-09
 * 
 * @copyright Copyright (c) 2022
 * 
输入示例：
6 100
输出示例：
7407407407407407407407407407407407407407407407407407407407407407407407407407407407407407407407407340
这超出了整数的表示范围。
 */
 #include <stdio.h>
 #define MAXN 100000

 int main() {
    int A, N;
    int i, S[MAXN], C;

    scanf("%d %d", &A, &N);
    if (!N) {                   /* 处理N为0时的特殊情况 */
        printf("0\n");
        return 0;
    }
    for (i = 0; i < N; ++i) {   /* 初始化大数和各位均为0 */
        S[i] = 0;
    }
    C = 0;                      /* 初始化进位为0 */
    for (i = 0; i < N; ++i) {   /* 对每一位 */
        C += A * (N - i);       /* 直接计算累加结果 */
        S[i] = C % 10;          
        C /= 10;
    }
    if (C) printf("%d", C);     /* 输出最高位的进位 */
    for (i = N - 1; i >= 0; --i) {
        printf("%d", S[i]);
    }
    printf("\n");
    return 0;
 }