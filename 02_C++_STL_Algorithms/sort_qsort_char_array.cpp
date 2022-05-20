/*
qsort string
https://www.bilibili.com/video/BV1Ty4y1n7JH?p=7&spm_id_from=pageDriver
天勤 见网盘
*/
#include <stdio.h>
#include <stdlib.h> // qsort
#include <cstring>  // strcmp
int cmp(const void *a, const void *b) {
    // 提取
    char *L = *((char**) a);
    char *R = *((char**) b);
    return strcmp(L, R); // strcmp
}

int main() {
    // double arr[10] = {1.0, 2.0, 0.0, -1.0, 3.0, -9.0, 12.0, 1.0, 2.0, 10.0}; // 改成double (数组不改会排乱)
    char *arr[] = {
        "welcome",
        "to",
        "the",
        "new",
        "world"
        };
    int n = 5;
    qsort(arr, n, sizeof(char*), cmp);
    for (int i = 0; i < n; ++i) {
        printf("%s ", arr[i]);
    }
    return 0;
}