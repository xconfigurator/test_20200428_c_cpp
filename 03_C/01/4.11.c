/*
4.11.c 计算文件大小
编写一个C程序，用来计算指定文件大小。

说明：

@since 2021/2/16
*/
#include "stdio.h"
int main() {
    FILE *myf;
    long f;
    myf = fopen("d:/test/c/test.txt", "r");
    fseek(myf, 0, SEEK_END);
    f = ftell(myf);
    fclose(myf);
    printf("The length of the file is %d bytes\n", f);
    return 0;
}