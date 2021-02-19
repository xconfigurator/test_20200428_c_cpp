/*
4.12.c 记录程序的运行时间
任意编写一段程序，要求记录并输出该段程序的执行时间。

说明：

@since 2021/2/16
*/
#include <time.h>
#include <stdio.h>
#include <dos.h>
#include <windows.h>

int main() {
    clock_t start, end;
    start = clock();
    // 
    Sleep(5000);
    // 
    end = clock();
    printf("The time was: %f\n", (double)(end - start) / CLK_TCK);
    return 0;
}