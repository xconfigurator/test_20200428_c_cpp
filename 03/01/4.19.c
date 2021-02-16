/*
4.19.c 递归反向输出字符串
编写一个递归函数，实现将输入的任意长度字符串反向输出。

输入样例：
abcdefghijklmn#

输出样例：
nmlkjihgfedcba

@since 2021/2/16
*/
#include "stdio.h"
void Print();

int main() {
    printf("Please input a string ending for '#'\n");
    Print();
    return 0;
}

void Print() {
    char a;
    scanf("%c", &a);
    if (a != '#') {
        Print();
    }
    if (a != '#') {
        printf("%c", a);
    }
}