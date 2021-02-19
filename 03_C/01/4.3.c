/*
4.3.c 嵌套if-else语句妙用
学校进行成绩分级管理，取消分数制，改为成绩分级评定。
具体办法：
小于60分为E类；
60分至70分（不含70分）为D类；
70分至80分（不含）为C类；
80分至90分（不含）为B类；
90分以上为A类。
设计一个程序，对输入的成进行登记划分。

说明：
关键点在编程前写好“改进方案的流程图”

@since 2021/2/15
*/
#include <stdio.h>
int main() {
    int score;
    printf("Please input the score\n");
    scanf("%d", &score);
    if (score < 80) {
        if (score < 70) {
            if (score < 60) {
                printf("E\n");
            } else {
                printf("D\n");
            }
        } else {
            printf("C\n");
        } 
    } else {
        if (score < 90) {
            printf("B\n");
        } else {
            printf("A\n");
        }
    }
}