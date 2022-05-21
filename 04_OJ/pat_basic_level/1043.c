/*
@author liuyang
@since 2021/2/20

输出PATest
https://pintia.cn/problem-sets/994805260223102976/problems/994805280074743808

说明：使用hash思想
这里的hash函数就是 “取ASCII码”：(int)s[i]
浪费空间。这里的策略是拿空间换时间。

输入样例：
redlesPayBestPATTopTeePHPereatitAPPT

输出样例：
PATestPATestPTetPTePePee
*/
#include <stdio.h>

//const int MAX_SIZE = 10001;
#define MAX_SIZE 10001

int main () {
    char s[MAX_SIZE];
    //int count[200] = {};// C会标红
    int count[200] = {0};
    char dic[] = "PATest";
    gets(s);
    // hash
    for (int i = 0; s[i] != '\0'; ++i) {
        ++count[(int)s[i]];
    }
    while (1) {
        int flag = 0;// 这个标志用于判断下面的每一轮循环是否做了符合我们预期的事情。
        for (int i = 0; dic[i] != '\0'; ++i) {
            if (count[(int)dic[i]] > 0) {// (int)dic[i] 就是字符dic[i]在散列表count中的地址
                printf("%c", dic[i]);
                --count[(int)dic[i]];
                flag = 1;
            }
        }
        if (flag == 0) {
            break;
        }
    }
    return 0;
}