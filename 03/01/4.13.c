/*
4.13.c 十进制/二进制转化器
编写一个程序，将输入的十进制数转化为二进制表示。

说明：

@since 2021/2/16
*/
#include "stdio.h"
const int BINARY_LENGTH = 100;
void deToBi(int a);

int main() {
    int a;
    printf("Please input a Decimal digit\n");
    scanf("%d", &a);
    deToBi(a);
    return 0;
}

void deToBi(int a) {
    int i = 0, stack[BINARY_LENGTH], r, s;
    // 短除
    do {
        r = a / 2; // 商
        s = a % 2; // 余数
        stack[i] = s;
        if (r != 0) {
            i++;
            a = r;
        }
    } while (r);
    // 输出
    for (; i >= 0; i--) {
        printf("%d", stack[i]);
    }
}