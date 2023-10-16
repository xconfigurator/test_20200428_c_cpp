/**
 * @file 04.c
 * @author your name (you@domain.com)
 * @brief 
 * 编写一个程序，接受两个int类型的参数：一个是值；一个是位的位置。
 * 如果指定的位置是1，该函数返回1；否则返回0.
 * 
 * 编程分析：
 * 先通过位移指定位数，再和1进行与操作。
 * 在程序需要检测指定位的值时，对于指定位置可以使用固定掩码进行“与”操作，
 * 但是对于题目类型中的不确定位置，掩码设置会过于复，故选择移位再检测的策略。
 * 
 * 输入样例1：
 * 10 3
 * 输入样例2：
 * 10 2
 *
 * @version 0.1
 * @date 2023-10-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <limits.h>

int get_bit(int n, int pos);

int main(int argc, char const * argv[]) {
    int i, pos;
    printf("Enter a number and a position.:");
    scanf("%d %d", &i, &pos);
    printf("the %d position of %d is %d\n", pos, i , get_bit(i, pos));
    return 0;
}

int get_bit(int n, int pos) {
    const static int size = CHAR_BIT * sizeof(int);
    if (pos > size || pos < 0) {
        printf("Error position.\n");
        return -1;
    }
    if (1 & (n>>pos)) {
        return 1;
    } else {
        return 0;
    }
}