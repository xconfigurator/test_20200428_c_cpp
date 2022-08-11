/**
 * @file 1.3.0.c
 * @author your name (you@domain.com)
 * @brief 数列求和
 * 例如：A = 1, N = 3时， S = 1 + 11 + 111 = 123 
 *
 * @version 0.1
 * @date 2022-08-09
 * 
输入示例：
1 3
输出：
123

输入示例：
1 0
输出：
0

 * @copyright Copyright (c) 2022
 */
#include <stdio.h>

int main() {
    int A, N, K, S, i;

    scanf("%d %d", &A, &N);
    if(!N) {    /* 处理N为0时的特殊情况 */
        printf("0\n");
        return 0;
    }
    S = K = A;  /* 初始化K和总和S */
    for (i = 1; i < N; ++i) {
        K = K * 10 + A; /* 计算下一个数列项 */
        S += K;
    }
    printf("%d\n", S);
    return 0;
}