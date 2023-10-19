/**
 * @file 05.c
 * @author your name (you@domain.com)
 * @brief 
 * 随机抽取数据
 * 从数组中随机选择指定数量的元素，并打印他们。每个元素只能选择一次。
 * srand()
 * rand()
 * clock()
 * 
 * 编程分析：
 * 题目要求设计一个随机抽取数据的函数，每个数据只能被抽取一次。为了记录每个数据被抽取的次数，可以使用另外一个和原数据数组相对应的数组进行抽取标记，
 * 设置对应位上的数据，表示对应数据曾经被抽取过。
 * 
 * @version 0.1
 * @date 2023-10-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>// memset
#define SIZE 100

void select(int data[], int length, int n);

int main() {
    int test[SIZE], number;
    printf("Enter number to selected.");
    scanf("%d", &number);
    for (int i = 0; i < SIZE; i++) {
        test[i] = i;
    }
    select(test, SIZE, number);
    return 0;
}

void select(int data[], int length, int n) {
    srand((unsigned long) clock());
    printf("Start to select Number.\n");
    // 辅助的标记数组，大小与data相同。
    int* marks = (int*) malloc(length * sizeof(int));
    memset(marks, 0, length * sizeof(int));// 数组一定要初始化！！！
    int index;
    while (n > 0) {
        index = rand() % length;
        if (marks[index] != 0) { 
            continue;
        } else {
            marks[index] = 1;
        }
        printf("Selected ID: %3d DATA:: %3d \n", index, data[index]);
        n--;
    }
}