/*
4.14.c 打印特殊图案
  *
 ***
*****

说明：

@since 2021/2/16
*/
#include "stdio.h"
#include "string.h"

void PrintTrangle(int n);

int main() {
    int n;
    printf("How many rows of * for trangle\n");
    scanf("%d", &n);
    PrintTrangle(n);
    return 0;
}

void PrintTrangle(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        // 打印n-i个space
        for (j = 0; j < n-i; j++) {
            printf(" ");
        }
        // 打印2i-1个*
        for (j = 0; j < 2 * i - 1; j ++) {
            printf("*");
        }
        printf("\n");
    }
}