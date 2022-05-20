/*
qsort char
https://www.bilibili.com/video/BV1Ty4y1n7JH?p=7&spm_id_from=pageDriver
天勤 见网盘
*/
#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b) {
    // 提取
    /*
    char L = *((char*) a); // 改成char
    char R = *((char*) b); // 改成char
    // 升序规则
    if (L > R) {
        return 1;
    } else if (L == R) {
        return 0;
    } else {
        return -1;
    }*/
    return *((char*) a) - *((char*) b); 
}

int main() {
    // double arr[10] = {1.0, 2.0, 0.0, -1.0, 3.0, -9.0, 12.0, 1.0, 2.0, 10.0}; // 改成double (数组不改会排乱)
    char arr[] = "bdcfadfeho";
    int n = 10;
    qsort(arr, n, sizeof(arr[0]), cmp);
    /*
    for (int i = 0; i < n; ++i) {
        printf("%c ", arr[i]);
    }*/
    puts(arr);
    return 0;
}
