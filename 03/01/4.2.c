/*
4.2.c 计算字符的ASCII码
编写一个程序，在终端输入一个字符串，输出他的ASCII码。

说明：

@since 2021/2/15
*/
#include "stdio.h"
int main() {
    char c;
    printf("Please input a character\n");
    scanf("%c", &c);
    getchar();
    printf("The ASCII of %c is %d\n", c, c);
    return 0;
}