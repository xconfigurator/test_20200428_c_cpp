/**
 * @file 1.3.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

// 枚举
void PrintN1(int N) {
    /* 打印从1到N的全部正整数 */
    for (int i = 1; i <= N; ++i) {// 注意到这个语法是可以接受的，估计是因为用的是g++的缘故
        printf("%d\n", i);
    }
}


// 枚举
void PrintN2(int N) {
    /* 打印从1到N的全部正整数 */
    if (N > 0) {
        PrintN2(N - 1);
        printf("%d\n", N);
    }
}

int main(int argc, char const *argv[]) {
    /* 读入整数N， 并调用两种不同的方法进行输出 */
    int N;
    scanf("%d", &N);

    printf("1. ================\n");
    PrintN1(N);

    printf("2. ================\n");
    PrintN2(N);

    return 0;
}
