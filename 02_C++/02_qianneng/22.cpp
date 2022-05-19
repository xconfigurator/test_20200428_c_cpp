// QN22.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 过程化基础/22. 字符串排序 P44
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include "strarray.h"
#include <string.h>
#include <stdlib.h>
/*
输入样例：
I am a student
I am a teacher
Hello World
Good moring
Good afternoon
Good evening
^z

输出样例：
Sorted string list:
Good afternoon
Good evening
Good moring
Hello World
I am a teacher  <-- error 202110082021
I am a student  <-- error 202110082021
*/
using namespace std;

// strarray.h
typedef char* String;
int ReadString(String& s);// 返回1表示成功读入
void Insert(String strList[], String& s);
void Output(String strList[]);
int Search(String strList[], String& str);


const int Max = 100;
String stringList[Max];
int arrSize = 0;

// strarray.cpp
using namespace std;


int ReadString(String& s)
{
    const int bufsize = 100;
    static char buffer[bufsize];
    cin.getline(buffer, 100);
    if (cin.eof())
        return 0;
    if (!s) {// 注意，必须是这个！！！
        delete s;
    }
    s = new char[strlen(buffer) + 1];
    if (!s) {
        cerr << "内存分配出错！" << endl;
        return 0;
    }
    strcpy(s, buffer);
    return 1;
}

void Insert(String strList[], String& s)
{
    if (arrSize == Max) {
        cerr << "数组溢出" << endl;
        exit(1);
    }
    int i, j;
    i = Search(strList, s);
    for (j = arrSize - 1; j >= i; j--) {
        strList[j + 1] = strList[j];
    }
    strList[i] = s;
    arrSize++;
}

void Output(String strList[])
{
    cout << endl << "Sorted string list:" << endl;
    for (int i = 0; i < arrSize; i++) {
        cout << strList[i] << endl;
    }
}

int Search(String strList[], String& str)
{
    for (int i = 0; i < arrSize; i++) {
        if (strcmp(strList[i], str) > 0) {
            return i;// found
        }
    }
    return 0;
}


int main()
{
    //std::cout << "Hello World!\n";
    String s = NULL;
    while (ReadString(s)) {
        Insert(stringList, s);
    }
    Output(stringList);
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
