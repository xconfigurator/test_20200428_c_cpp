/**
 * @file str02cstring.cpp
 * @author liuyang
 * @brief 演示<cstring>常用函数
 * 
 * p86 6.3.1.cpp 常用字符串函数 视频03 05:51开始讲解(直接看代码就好)
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
 * 
 * @version 0.1
 * @date 2021-12-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <cstring>          // 要使用字符串库函数
using namespace std;

void PrintSmall(char s1[], char s2[]) {         // 输出词典序小的字符串
    if (strcmp(s1, s2) <= 0) {
        cout << s1;
    } else {
        cout << s2;
    }
}

int main() {
    char s1[30];
    char s2[40];
    char s3[100];
    strcpy(s1, "Hello");
    strcpy(s2, s1);
    cout << "1. " << s2 << endl;                           // Hello
    strcat(s1, ", World");
    cout << "2. " << s1 << endl;                           // Hello, World
    cout << "3. "; PrintSmall("abc", s2); cout << endl;    // Hello
    cout << "4. "; PrintSmall("abc", "aaa"); cout << endl; // aaa
    int n = strlen(s2);
    cout << "5. " << n << "," << strlen("abc") << endl;    // 5,3
    strupr(s1);
    cout << "6. " << s1 << endl;                           // HELLO

    return 0;
}
