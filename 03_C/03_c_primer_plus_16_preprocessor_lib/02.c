/**
 * @file 02.c
 * @author your name (you@domain.com)
 * @brief 
 * 两数的调和平均数这样计算：先求两数的倒数，然后计算两个倒数的平均值，最后取计算结果的倒数。
 * 使用#define指令定义一个宏“函数”，执行该运算。编写一个简单的程序，用于测试该宏。
 * 
 * 编程分析：用括号避免宏展开时的歧义。
 * 
 * 输入：2 4
 * 输出预期: 2.666667
 * @version 0.1
 * @date 2023-10-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#define HMEAN(X, Y) (1 / ((1 / (X) + 1 / (Y)) / 2))

int main() {
    double f1, f2;
    printf("Enter two float number: ");
    scanf("%lf %lf", &f1, &f2);
    printf("The %f and %f's HMEAN is %lf", f1, f2, HMEAN(f1, f2));
    return 0;
}