/**
 * @file io_202212052008_scanf.c
 * @author your name (you@domain.com)
 * @brief 
 *          注意：202212052123 这个程序在VSCode + gcc情况下还有问题。其他编译环境还没测试。
 * @version 0.1
 * @date 2022-12-05
 * 
 * @copyright Copyright (c) 2022
 *
 * 
输入样例：
10
1.1
c
string 
 */
#include <stdio.h>

int main(int argc, char const *argv[]) {
    int a;
    float b;
    char c;
    char str[10];

    scanf("请输入一个整形数据：%d", &a);// 注意到这个提示是不会生效的。
    scanf("请输入一个浮点型数据；%f", &b);
    getchar();
    scanf("请输入一个字符型数据：%c", &c);
    scanf("请输入一个字符串：%s", str);

    printf("a = %d\n", a);
    printf("b = %f\n", b);
    printf("c = %c\n", c);
    printf("str = %s\n", str);

    return 0;
}