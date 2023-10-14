/**
 * @file 02.c
 * @author your name (you@domain.com)
 * @brief 
 * 编写一个程序，通过命令行参数读取两个二进制字符串，对这两个二进制数使用~，&， |， ^，并以二进制字符串形式打印结果（如果无法使用命令行环境，可以通过交互让程序读取字符串）
 * liuyang: 在VSCode环境下可通过修改launch.json来实现
 * 
 * 编程分析：
 * 题目要求程序通过命令行参数读取两个二进制数据（以字符串表示），并对两个二进制数据进行位运算。
 * 程序首先应当将命令行参数的字符串转换成二进制数据，并进行位运算，最后再转换回字符串输出。
 *  
 * @version 0.1
 * @date 2023-05-24
 *       2023-10-05
 *       2023-10-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#define SIZE 32

int bstoi(char *st);
char* itobs(int n, char *ps);

int main(int argc, char *argv[]) {
    // 需要使用命令行参数
    // 在VSCode环境下可通过修改launch.json来实现
    if (argc != 3) {
        printf("Usage:%s binary_string binary_string. \n", argv[0]);
        exit(EXIT_FAILURE);
    }

    char bs[SIZE] = {};
    int result = 0;
    
    // ~
    result = (~bstoi(argv[1]));
    itobs(result, bs);
    printf("~%s result is : %s\n", argv[1], bs);
    result = (~bstoi(argv[2]));
    itobs(result, bs);
    printf("~%s result is : %s\n", argv[2], bs);

    // &
    result = (bstoi(argv[1]) & (bstoi(argv[2])));
    itobs(result, bs);
    printf("%s & %s result is : %s\n", argv[1], argv[2], bs);

    // |
    result = (bstoi(argv[1]) | (bstoi(argv[2])));
    itobs(result, bs);
    printf("%s | %s result is : %s\n", argv[1], argv[2], bs);

    // ^
    result = (bstoi(argv[1]) ^ (bstoi(argv[2])));
    itobs(result, bs);
    printf("%s ^ %s result is : %s\n", argv[1], argv[2], bs);

    return 0;
}

/* 字符串转换成整数 */
int bstoi(char *st) {
    int sum = 0;
    while(*st != '\0') {
        sum *= 2;
        if (*st != '0' && *st != '1') {// 非法字符
            printf("The argument should be binary. \n");
            exit(EXIT_FAILURE);
        }
        sum += *st++ - '0';
    }
    return sum;
}

/* 整数转换成字符串输出 */
char* itobs(int n, char *ps) {
    int i;
    const static int size = CHAR_BIT * sizeof(int);// CHAR_BIT表示char中的位数，size表示int类型的位数
    for (i = size - 1; i >= 0; i--, n >>= 1) {
        ps[i] = (01 & n) + '0';
    }
    ps[size] = '\0';
    return ps;
}