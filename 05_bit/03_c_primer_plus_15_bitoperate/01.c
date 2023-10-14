/**
 * @file 01.c
 * @author your name (you@domain.com)
 * @brief 
 * 编写一个函数，把二进制字符串转换为一个数值。
 * 例如，假设有下面的语句，那么把pbin作为参数传递给该函数后，它应该返回一个int类型的值25。
 * char * pbin = "01001001";
 * 
 * 2023/5/24 ????????????????????????????????????????????? 输出跟书上的预期不一样，是哪里抄错了？
 * 2023/10/1 已经使用Java的Integer.valueOf("01001001", 2);验证过。书上的25写错了。程序本身没错，也没抄错。
 * 
 * @version 0.1
 * @date 2023-05-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */
 // 
 
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