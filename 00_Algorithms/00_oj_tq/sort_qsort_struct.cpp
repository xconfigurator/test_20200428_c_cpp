/*
qsort struct 对结构体数组的排序
https://www.bilibili.com/video/BV1Ty4y1n7JH?p=7&spm_id_from=pageDriver
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
    return L - R;
}

int main() {
    structTest arr[] = {
        {1, 2},
        {0, 3},
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