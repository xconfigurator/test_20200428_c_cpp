/**
 * @file io_202212052002_printf.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main(int argc, char const *argv[]) {
    int a = 1;
    float b = 1.1;
    char c = 'a';
    char str[20] = "hello, world";

    printf("a = %d\n", a);
    printf("b = %f\n", b);
    printf("c = %c\n", c);
    printf("str = %s\n", str);
    return 0;
}