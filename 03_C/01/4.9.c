/*
4.9.c 巧用位运算
用位运算操作实现两个整数的交换。

说明：


@since 2021/2/16
*/
#include "stdio.h"
int main() {
    int a, b;
    a = 5;
    b = 10;
    printf("a = %d, b = %d\n", a, b);
    // 交换
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}