/**
 * @file str02cstringtestbed.cpp
 * @author liuyang
 * @brief 测试cstring中的常用函数
 * 
 * 说明：
 * 使用字符串函数，需要#include <cstring>
 * 字符串函数都根据'\0'来判断字符串结尾
 * 形参为char[]类型，则实参可以是char数组或字符串常量（这个很重要！可以传递"foo bar"呦！）
 * 
 * 常用：
 * strcpy, strcmp, strlen, strcat, strupr, strlwr等等
 * strchr, strstr
 * https://www.runoob.com/cplusplus/cpp-strings.html
 * 
 * @version 0.1
 * @date 2021-12-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <cstring>
using namespace std;

const int MAX_SIZE = 10000;

int main(int argc, char const *argv[]) {
    char s[MAX_SIZE];
    
    // strcpy
    cout << "#strcpy" << endl;
    char src[] = "str source";
    char dest[MAX_SIZE];
    strcpy(dest, src);
    cout << dest << endl;

    // strcmp
    cout << "#strcmp" << endl;
    char stra[] = "abc";
    char strb[] = "Abc";
    cout << strcmp(stra, strb) << endl;// 应该是大于零的值。 A的ASCII 65 < a的ASCII 97

    // strlen
    cout << "#strlen" << endl;
    cout << "strlen(src) = " << strlen(src) << endl;

    // strcat
    cout << "#strcat" << endl;
    // cout << strcat("hello, ", "world") << endl;// Segmentation fault
    char catDestination[MAX_SIZE];
    strcat(catDestination, "hello");
    strcat(catDestination, ", ");
    strcat(catDestination, "world");
    cout << catDestination << endl;

    // strupr
    cout << "#strupr strlwr" << endl;
    char ss[] = "foo bar";
    cout << ss << endl;
    cout << strupr(ss) << endl;
    // cout << strlwr("HELLO, WORLD") << endl;// Segmentation fault
    char SS[] = "HELLO, WORLD";
    cout << strlwr(SS) << endl;
    
    return 0;
}