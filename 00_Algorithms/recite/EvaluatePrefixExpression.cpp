/*
前缀表达是求值

逆波兰表达式 
《算法基础与在线实践》P79
https://www.bilibili.com/video/BV1Zb411q7iY?p=9
视频解释了其实应该叫做波兰表达式，但出题人把这个前缀表达式定义成了“逆波兰表达式”不必纠结。
一般课本定义
前缀表达式：波兰表达式
后缀表达式：逆波兰表达式

《程序设计导引及在线实践（第2版)》 P174 9.4 逆波兰表达式

解题重点：
逆波兰表达式的定义
1. 一个数是一个逆波兰表达式，值为该数。
2. “运算符 逆波兰表达式 逆波兰表达式” 是逆波兰表达式，值为两个逆波兰表达式的值运算结果。
严格遵循这个递归定义，程序不必死记硬背。

题目：
《算法基础与在线实践》P79
《程序设计导引及在线实践（第2版)》 P174 9.4 逆波兰表达式

输入：
* + 11.0 12.0 + 24.0 35.0

输出：
1357.000000
*/
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

const int WORD_SIZE = 20;

double exp(); 
int main(int argc, char const *argv[]) {
    printf("%lf", exp()); // "%lf" "%f"貌似没啥区别      
    return 0;
}

// 读入一个前缀表达式并求其值
double exp() {
    char s[WORD_SIZE];
    cin >> s;
    switch (s[0]) {
        case '+': return exp() + exp();
        case '-': return exp() - exp();
        case '*': return exp() * exp();
        case '/': return exp() / exp();
        default: return atof(s);
        break;
    }
}