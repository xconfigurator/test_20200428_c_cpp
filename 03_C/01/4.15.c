/*
4.15.c 打印杨辉三角


说明：

@since 2021/2/16
*/
#include "stdio.h"
const int LEVEL = 7;

void indent(int currentLevel, int level) {
    // level - currentLevel
    // 待完善
    /*
    int i;
    int n = (level - currentLevel) / 2;
    for (i = 0; i < n; i++) {
        printf("\t");
    }
    */
}

int main() {
    int i, j, k, buf[LEVEL], tmp[LEVEL];
    for (i = 0; i < LEVEL; i ++) {
        indent(i, LEVEL);
        if (0 == i) { // 第一行
            printf("%d\n", 1);
        } else if (1 == i) {// 第二行
            printf("%d\t%d\n", 1, 1);
            buf[0] = 1;
            buf[1] = 1;
        } else {// 其他行
            for (j = 1; j <= i + 1; j++) {
                if (j == 1 || j == i + 1) {
                    printf("%d\t", 1);
                    tmp[j - 1] = 1;
                } else {
                    printf("%d\t", buf[j - 2] + buf[j - 1]);
                    tmp[j - 1] = buf[j - 2] + buf[j - 1];
                }
            }
            printf("\n");
            for (k = 0; k < LEVEL; k++) {
                buf[k] = tmp[k];
            }
        }
    }
}