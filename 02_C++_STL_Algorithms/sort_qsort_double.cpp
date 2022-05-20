/*
qsort double
https://www.bilibili.com/video/BV1Ty4y1n7JH?p=7&spm_id_from=pageDriver
天勤 见网盘
*/
#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b) {
    // 提取
    double L = *((double*) a); // 改成double
    double R = *((double*) b); // 改成double
    // 升序规则
    if (L > R) {
        return 1;
    } else if (L == R) {
        return 0;
    } else {
        return -1;
    }
    // 注意：double不可以用下面的这句替代
    // 因为：小数按照整型返回的时候就会变成0。这显然不符合目的（无法区分正负）。
    // return *((int*) a) - *((int*) b); // 不可以！！！ 注意！double 不可以用这句代替
}

int main() {
    double arr[10] = {1.0, 2.0, 0.0, -1.0, 3.0, -9.0, 12.0, 1.0, 2.0, 10.0}; // 改成double (数组不改会排乱)
    int n = 10;
    qsort(arr, n, sizeof(arr[0]), cmp);
    for (int i = 0; i < n; ++i) {
        printf("%f ", arr[i]);
    }
    return 0;
}
