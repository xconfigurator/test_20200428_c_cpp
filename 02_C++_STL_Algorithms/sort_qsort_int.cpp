/*
qsort int
https://www.bilibili.com/video/BV1Ty4y1n7JH?p=7&spm_id_from=pageDriver
*/
#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b) {
    // 提取
    int L = *((int*) a);
    int R = *((int*) b);
    // 升序规则
    if (L > R) {
        return 1;
    } else if (L == R) {
        return 0;
    } else {
        return -1;
    }
    // return *((int*) a) - *((int*) b);
}

int main() {
    int arr[10] = {1, 2, 0, -1, 3, -9, 12, 1, 2, 10}, n = 10;
    qsort(arr, n, sizeof(arr[0]), cmp);
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}