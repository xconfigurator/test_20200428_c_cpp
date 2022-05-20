/*
qsort struct array 对结构体数组的二级排序
https://www.bilibili.com/video/BV1Ty4y1n7JH?p=7&spm_id_from=pageDriver
天勤 见网盘
*/
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
typedef struct structTest {
    int a;
    int b;
} structTest;

int cmp(const void *a, const void *b) {
    // 提取
    int L = ((structTest*) a)->a;
    int R = ((structTest*) b)->a;
    if(L < R) {
        return -1;// 注意值，升序。
    } else if (L == R) {
        int l = ((structTest*) a)->b;
        int r = ((structTest*) b)->b;
        return l - r;
    } else {
        return 1;
    }
}

int main() {
    structTest arr[] = {
        {1, 2},
        {1, 3},
        {2, 1},
        {5, 1},
        {-1, 0}
    };
    int n = 5;
    qsort(arr, n, sizeof(arr[0]), cmp);
    for (int i = 0; i < n; ++i) {
        printf("%d %d\n ", arr[i].a, arr[i].b);
    }
    return 0;
}