/*
4.7.c 矩阵的转置运算
用键盘从终端输入一个3行4列的矩阵，编写一个函数对该矩阵进行转置。

说明：

输入矩阵样例：
1 2 3 4
5 6 7 8
9 0 1 2

输出样例:
1 5 9
2 6 0
3 7 1
4 8 2

@since 2021/2/16
*/
#include "stdio.h"

void InputMatrix(int (*a)[4], int, int);
void OutputMatrix(int (*b)[3], int, int);
void MatrixTranspose(int (*a)[4], int (*b)[3]);

int main() {
    int a[3][4], b[4][3]; /*a存放原矩阵， b存放a矩阵转置矩阵*/
    printf("Please input 3 x 4 matrix\n");
    InputMatrix(a, 3, 4);
    MatrixTranspose(a, b);
    printf("The Transposed Matrix is \n");
    OutputMatrix(b, 4, 3);
    getchar();
    return 0;
}

void InputMatrix(int (*a)[4], int n, int m) {
    /*输入n*m阶矩阵*/
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", *(a + i) + j);
        }
    }
}

void OutputMatrix(int (*b)[3], int n, int m) {
    /*输出n*m阶矩阵 */
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", *(*(b + i) + j));
        }
        printf("\n");
    } 
}

void MatrixTranspose(int (*a)[4], int (*b)[3]) {
    int i, j; /* 矩阵的转置运算 */
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            b[i][j] = a[j][i]; // 核心
        }
    }
}