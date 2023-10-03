/**
 * @file str01.cpp
 * @author liuyang
 * @brief 字符串使用示例 （字符数组）（多敲几遍!）
 * 
 * 问：为啥要练字符数组的形式？
 * 答：cstring.h中的字符串函数多是以char s[]形式作为参数。
 * 
 * P84 6.2.1.1.cpp
 * 慕课视频
 * 01 介绍本程序
 * 02 介绍如何读入字符串(忘了可以经常查), 这一集可以配合天勤机考视频讲字符和字符串输入的章节一起。
 *      char prisonName[100];
 *      读字符
 *      cin >> prisonName;
 *      scanf("%s", prisonName);// printf("%s", prisonName);
 *      读一行
 *      gets(prisonName);
 *      cin.getline(prisonName, 100);
 *      
 * 03 <cstring>
 * 04 一个例子
 * 
 * 说明：
 * C++中三种字符串
 * 1. 字面值"hello, C++"
 * 2. 字符数组, \0结尾
 * 3. STL string
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

int main(int argc, char const *argv[]) {
    char title[] = "Prison Break";
    char hero[100] = "Michael Scofield";
    char prisonName[100];
    char response[100];
    cout << "What's the name of the prison in" << title << endl;
    cin >> prisonName;
    if (strcmp(prisonName, "Fox-River") == 0) {// strcmp
        cout << "Yeah! Do you love" << hero << endl;
    } else {
        strcpy(response, "It seems you haven't watched it!\n");// strcpy
        cout << response;
    }
    title[0] = 't';
    title[3] = 0;
    cout << title << endl;
    return 0;
}

