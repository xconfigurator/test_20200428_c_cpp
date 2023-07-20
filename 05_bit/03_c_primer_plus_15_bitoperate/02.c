/**
 * @file 02.c
 * @author your name (you@domain.com)
 * @brief 
 * 编写一个程序，通过命令行参数读取两个二进制字符串，对这两个二进制数使用~，&， |， ^，并以二进制字符串形式打印结果（如果无法使用命令行环境，可以通过交互让程序读取字符串）
 * @version 0.1
 * @date 2023-05-24
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
    if (argc != 3) {
        printf("Usage:%s binary_string binary_string. \n", argv[0]);
        exit(EXIT_FAILURE);
    }
    char bs[SIZE] = {};
    return 0;
}

int bstoi(char *st) {
    // TODO
    return 0;
}

char* itobs(int n, char *ps) {
    // TODO
    return 0;
}