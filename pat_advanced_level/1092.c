/*
@author liuyang
@since 2021/2/20

参考视频
https://www.bilibili.com/video/BV1Ty4y1n7JH?p=8
07:15

题目：
https://pintia.cn/problem-sets/994805342720868352/problems/994805374509498368

说明：
本实现代码使用gets，注意在pat提交时使用c编译器。


Sample Input 1:
ppRYYGrrYBR2258
YrR8RrY

Sample Output 1:
Yes 8

Sample Input 2:
ppRYYGrrYB225
YrR8RrY

Sample Output 2:
No 2
*/
#include <stdio.h>

int main() {
    int counts[123] = {0};
    char seller[1001];
    char littleRed[1001]; // Eva == 小红 嘿嘿
    gets(seller);
    gets(littleRed);
    
    for (int i = 0; seller[i] != '\0'; ++i) {
        ++counts[(int)seller[i]];
    }

    for (int i = 0; littleRed[i] != '\0'; ++i) {
        --counts[(int)littleRed[i]];
    }

    int count = 0;
    for (int i = 0; i < 123; ++i) {
        if (counts[i] < 0) {
            count += counts[i];
        }
    }

    if (count < 0) {
        printf("No %d\n", -count);
    } else {
        count = 0;
        for (int i = 0;  i < 123; ++i) {
            if (counts[i] >= 0) {
                count += counts[i];
            }
        }
        printf("Yes %d\n", count);
    }

    return 0;
}