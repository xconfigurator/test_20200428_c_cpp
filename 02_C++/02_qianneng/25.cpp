/*
字符串比较 P52
2021/9/18

实现库函数strcmp()。其原型为：
int strcmp(const char* str1, const char* str2);

TODO 找一下林锐的高质量C++程序设计指南的参考程序。
*/
#include <iostream>
using namespace std;

int strcmp(const char* str1, const char* str2);

int main(int argc, char const *argv[]) {
    char * ps1 = "abcd";
    char * ps2 = "abcdef";
    int compare = strcmp(ps1, ps2);
    if (compare > 0) {
        cout << ps1 << " > " << ps2 << endl;
    }
    if (compare < 0) {
        cout << ps1 << " < " << ps2 << endl;
    }
    if (0 == compare) {
        cout << ps1 << " = " << ps2 << endl;
    }
    return 0;
}

int strcmp(const char* str1, const char* str2) {
    while (*str2 && (*str1 ++ == *str2 ++) );
    return *str1 - * str2;
}