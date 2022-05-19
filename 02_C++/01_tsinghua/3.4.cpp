// 这是一道填空题
// 题目：下面的程序可以统计命令行第一个参数中出现的字母个数，请填充下面空白，完成程序。
#include <stdio.h>
#include <ctype.h>

// 练
// cd 02/01 
// ./3.4.exe hello
int main(int argc, char const *argv[]) {
    char const *str;
    int count = 0;
    if (argc < 2) return 1;
    str = argv[1];
    while (*str) {
        if (isalpha(*str++)) {
            count++;
        }
    }
    printf("\n 字母个数：%d\n", count);
    return 0;
}