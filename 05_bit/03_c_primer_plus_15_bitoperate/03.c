/**
 * @file 03.c
 * @author your name (you@domain.com)
 * @brief 
 * 编写一个函数，接受一个int类型的参数，并返回该参数中打开位的数量。在一个程序中测试该函数。
 * 
 * 编程分析：
 * 函数的功能是计算一个整型数据中打开位的数量。其中打开位是指函数的参数转换为二进制后，指定的数据位为1即为打开。
 * 判断方式可以采用“&”操作，通过位移逐次判断整形数据的最后一位上的数据是否为1。
 * 
 * 输入辅助：
 * 1. 运行参数修改launch.json
 * 2. 获取测试整形值的二进制字符串形式：Java： Integer.toBinaryString(17) 
 *
 * 输入：17
 * 输出预期：2 
 * 因为17的二进制字符串为10001
 * 
 * @version 0.1
 * @date 2023-10-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int switch_count(int n);

int main(int argc, char const *argv[]) {
    if (argc != 2) {
        printf("Usage:%s numerical.\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    int i = atoi(argv[1]);/* 将命令行参数转换为整型数据 */
    printf("The switch bit of %d is %d. \n", i, switch_count(i));
    return 0;
}

int switch_count(int n) {
    const static int size = CHAR_BIT * sizeof(int);
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (n & 1) {
            sum++;
        }
        n >>= 1;
    }
    return sum;
}