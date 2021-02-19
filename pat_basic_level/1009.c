/*
@author liuyang
@since 2021/2/19

分类：模拟
说反话 c版本
https://pintia.cn/problem-sets/994805260223102976/problems/994805314941992960

输入样例：
Hello World Here I Come

输出样例：
Come I Here World Hello
*/
#include <stdio.h>
#include <string.h>

const unsigned int MAX_SIZE = 100;

void reverse(int left, int right, char a[]);

int main() {
    char str[MAX_SIZE];
    gets(str);
    int len = strlen(str);
    reverse(0, len - 1, str);
    int i = 0, j = 0;
    while (1) {
        while (str[j] != ' ' && str[j] != '\0') {
            j++;
        }
        reverse(i, j - 1, str);
        if (str[j] == '\0') {
            break;
        }
        j++;
        i = j;
    }
    puts(str);
    return 0;
}

// 串的逆置
void reverse(int left, int right, char a[]) {
    char temp;
    for (int i = left, j = right; i < j; ++i, --j) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}