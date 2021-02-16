/*
4.1.c 字符类型统计器
请编写一个C程序，在终端用键盘输入字符串，以Ctrl+Z组合键表示输入完毕。
统计输入的字符串中空格符、制表符、换行符的个数，并显示统计的结果。

说明：
很诡异。scanf不成。getchar版本必须是enter -> ctrl + z -> enter后才可以结束。
g++和cl都是一样的效果。

@since 2021/2/15
*/
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
int main() {
    char c;
    int space = 0, table = 0, enter = 0;
    // printf("EOF == %d", EOF);
    printf("Please input a string: \n");
    // scanf("%c", &c);
    while ((c = getchar()) != EOF) {
        switch (c) {
        case 32:
            space++;
            break;
        case 9:
            table++;
            break;
        case 10:
            enter++;
            break;
        default:
            break;
        }
        // scanf("%c", &c);
    }
    printf("The number of space: %d\n", space);
    printf("The number of table: %d\n", table);
    printf("The number of enter: %d\n", enter);
    getchar();
    return 0;
}