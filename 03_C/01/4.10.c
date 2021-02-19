/*
4.10.c 文件读写
创建一个后缀名为txt的文件，并向该文件中写入一个字符串，保存起来。
再打开该文件，读出文件中的内容。

说明：

d:/test/c/test.txt
hello, world

@since 2021/2/16
*/
#include "stdio.h"
#include <string.h>
int main() {
    FILE *fp;
    char pathName[20];
    char txt1[20] = {'\0'};
    char txt2[20] = {'\0'};
    int fileLen;
    /*打开文件*/
    printf("Please type the path name of the file\n");
    scanf("%s", pathName);
    fp = fopen(pathName, "w");
    /*写：将字符串写入文件*/
    printf("Please input a string to this file\n");
    scanf("%s", txt1);
    fileLen = strlen(txt1);
    fwrite(txt1, fileLen, 1, fp);
    fclose(fp);
    printf("The file has been saved\n");
    /*读*/
    printf("The content of the file: %s is \n", pathName);
    fp = fopen(pathName, "r");
    fread(txt2, fileLen, 1, fp);
    printf("%s\n", txt2);
    return 0;
}