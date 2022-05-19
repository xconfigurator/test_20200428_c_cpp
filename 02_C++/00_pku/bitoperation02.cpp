/**
 * @file bitoperation02.cpp
 * @author liuyang
 * @brief 位运算例题 视频17:46
 * @version 0.1
 * @date 2021-11-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
int main() {
    int n1 = 15;
    short n2 = -15;                 // 右移补符号位 负数的二进制表示形式 参考组成原理
    unsigned short n3 = 0xffe0;     // 右移补0
    char c = 15;
    n1 = n1 >> 2;
    n2 >>= 3;
    n3 >>= 4;
    c >>= 3;
    printf("n1=%d, n2=%x, n3=%x, nc=%x", n1, n2, n3, c);// n1=3, n2=fffffffe, n3=ffe, nc=1
    return 0;
}
