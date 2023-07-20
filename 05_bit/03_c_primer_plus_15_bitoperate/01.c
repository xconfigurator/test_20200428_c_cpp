/**
 * @file 01.c
 * @author your name (you@domain.com)
 * @brief 
 * 编写一个函数，把二进制字符串转换为一个数值。
 * 例如，假设有下面的语句，那么把pbin作为参数传递给该函数后，它应该返回一个int类型的值25。
 * char * pbin = "01001001";
 * 
 * @version 0.1
 * @date 2023-05-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */
 // ????????????????????????????????????????????? 输出跟书上的预期不一样，是哪里抄错了？
 #include <stdio.h>
 #include <stdlib.h>
 #define SIZE 32
 int bstoi(char *st);

 int main() {
    char input[SIZE];
    printf("Enter a binary string:");
    scanf("%s", input);
    printf("%d\n", bstoi(input));
    return 0;
 }

 int bstoi(char *st) {
    int sum = 0;
    while(*st != '\0') {
        sum *= 2;
        sum += *st++ - '0';
    }
    /*
    通过循环使每一位上的值都可以持续乘以2， 最终实现位值上数据的持续增长，该方法是从高位开始累加的
    */
    return sum;
 }