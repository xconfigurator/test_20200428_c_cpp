/*
@author liuyang
@since 2021/2/20

输出PATest
https://pintia.cn/problem-sets/994805260223102976/problems/994805280074743808

说明：使用hash思想
输入样例：
redlesPayBestPATTopTeePHPereatitAPPT

输出样例：
PATestPATestPTetPTePePee
*/
#include <stdio.h>

const int MAX_SIZE = 10001;

int main () {
    char s[MAX_SIZE];
    int count[200] = {};
    char dic[] = "PATest";
    gets(s);
    // hash
    for (int i = 0; s[i] != '\0'; ++i) {
        ++count[(int)s[i]];
    }
    while (1) {
        int flag = 0;
        for (int i = 0; dic[i] != '\0'; ++i) {
            if (count[(int)dic[i]] > 0) {
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