/**
 * @file 06.c
 * @author your name (you@domain.com)
 * @brief 
 * 结构化数组初始化、显示、排序
 *
 * @version 0.1
 * @date 2023-10-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */
/*
输入：
yang4 liu4
yang1 liu1
yang3 liu3
yang5 liu5
yang4 liu5

输出：
*/
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"

#define SIZE 5
typedef struct {
    char first[40];
    char last[40];
} names;

names staff[SIZE];

void set_name(names list[], int n);
void show_name(const names list[], int n);
int mycomp(const void * p1, const void * p2);// 用于qsort

int main() {
    set_name(staff, SIZE);
    printf("排序前：\n");
    show_name(staff, SIZE);
    qsort(staff, SIZE, sizeof(names), mycomp);
    printf("排序后：\n");
    show_name(staff, SIZE);
    return 0;
}

void set_name(names list[], int n) {
    printf("Enter the stuff names: ");// liuyang change
    for (int i = 0; i < n; i++) {
        //printf("Enter the No %d stuff name: ", i + 1);
        scanf("%s %s", list[i].first, list[i].last);
    }
}

void show_name(const names list[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Stuff No %d %10s.%-10s\n", i + 1, list[i].first, list[i].last);
    }
}

int mycomp(const void * p1, const void * p2) {
    const names *ps1 = (const names *) p1;
    const names *ps2 = (const names *) p2;
    int res = strcmp(ps1->last, ps2->last);
    if (res != 0) {
        return res;
    } else {
        return strcmp(ps1->first, ps2->first);
    }
}