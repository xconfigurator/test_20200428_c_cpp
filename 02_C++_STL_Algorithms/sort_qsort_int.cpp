/*
qsort int
https://www.bilibili.com/video/BV1Ty4y1n7JH?p=7&spm_id_from=pageDriver
天勤 见网盘
*/
#include <stdio.h>
#include <stdlib.h> // qsort
int cmp(const void *a, const void *b) {
    // 提取
    int L = *((int*) a);
    int R = *((int*) b);
    // 升序规则(这个规则貌似和stl中sort可以接收的cmp函数的规则正好相反)
    if (L > R) {// L < R 降序
        return 1;// l:我 r:你， 我排在你的哪边？ -> 提供符号函数的值
    } else if (L == R) {
        return 0;
    } else {
        return -1;
    }
    //return *((int*) a) - *((int*) b);// 升序 20220520 ok
    //return *((int*) b) - *((int*) a);// 降序 20220520 ok
}

int main() {
    int arr[10] = {1, 2, 0, -1, 3, -9, 12, 1, 2, 10}, n = 10;
    qsort(arr, n, sizeof(arr[0]), cmp);
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}